static void goodB2G() char * data ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_34_unionType myUnion ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  