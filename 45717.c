static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_64b_goodB2GSink ( & data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_64b_goodB2GSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; free ( data ); 