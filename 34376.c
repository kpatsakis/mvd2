static void goodB2G2() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 