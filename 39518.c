static void good2() if ( STATIC_CONST_TRUE )  char * * pointer = ( char * * ) malloc ( sizeof ( char * ) ) ; * pointer = data; char * data = * pointer ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( pointer ); 