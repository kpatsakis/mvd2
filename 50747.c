static void goodB2G2() TwoIntsClass * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( TwoIntsClass * ) calloc ( 100 , sizeof ( TwoIntsClass ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 