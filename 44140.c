static void goodG2B1() char * data ; data = NULL; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; free ( data ); 