void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_03_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 