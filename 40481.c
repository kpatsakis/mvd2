static void goodG2B1() TwoIntsClass * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( TwoIntsClass * ) malloc ( 100 * sizeof ( TwoIntsClass ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 