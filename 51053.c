static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  