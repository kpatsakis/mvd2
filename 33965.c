void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54b_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54b_badSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54c_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54c_badSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54d_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54d_badSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54e_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_54e_badSink(char * data) for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 