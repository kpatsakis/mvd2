static void goodG2B() char * data ; data = NULL; data = goodG2BSource ( data ); static char * goodG2BSource(char * data) data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 