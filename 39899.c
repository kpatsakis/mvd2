static void goodG2B1() char * data ; data = NULL; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = new char [ 10 + 1 ]; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 