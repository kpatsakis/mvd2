static void goodG2B1() char * data ; data = NULL; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 