static void goodB2G() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); char * dataCopy = data ; char * data = dataCopy ; free ( data ); 