static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; twoIntsStruct * data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; twoIntsStruct * tmpData ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; tmpData = ( twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( twoIntsStruct ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; twoIntsStruct * data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; twoIntsStruct * tmpData ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; tmpData = ( twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( twoIntsStruct ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 