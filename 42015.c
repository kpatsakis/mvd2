static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53b_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53b_goodB2GSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53c_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53c_goodB2GSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53d_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_53d_goodB2GSink(char * data) free ( data ); 