static void good2() if ( STATIC_CONST_TRUE )  char * data = ( char * ) malloc ( 100 * sizeof ( char ) ) ; char * tmpData ; strcpy ( data , "A String" ); tmpData = ( char * ) realloc ( data , ( 130000 ) * sizeof ( char ) ); if ( tmpData != NULL )  data = tmpData; strcpy ( data , "New String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 