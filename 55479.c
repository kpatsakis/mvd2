void CWE244_Heap_Inspection__w32_char_realloc_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char * password = ( char * ) malloc ( 100 * sizeof ( char ) ) ; password [ 0 ] = '\0'; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; password = realloc ( password , 200 * sizeof ( char ) ); strcpy ( password , "Nothing to see here" ); free ( password ); 