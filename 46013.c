static void goodG2B2() char * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "a string" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 