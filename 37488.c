static void goodB2G() char * data ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 