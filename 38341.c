void bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, twoIntsStruct *> dataMap) twoIntsStruct * data = dataMap [ 2 ] ; 