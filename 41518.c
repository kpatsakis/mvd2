static void goodG2B2() char * data ; if ( GLOBAL_CONST_TRUE )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 