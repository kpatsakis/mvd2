void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_61_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; data = CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_61b_badSource ( data ); char * CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 