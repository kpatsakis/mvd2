static void goodB2G1() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; goodB2G1Sink ( data ); static void goodB2G1Sink(twoIntsStruct * data) if ( goodB2G1Static )  free ( data ); 