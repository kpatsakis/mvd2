static void goodG2B2() char * data ; char dataGoodBuffer [ 100 ] ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 