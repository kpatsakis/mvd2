static void goodB2G() int * data ; map < int , int * > dataMap ; data = NULL; data = ( int * ) malloc ( 1 * sizeof ( int ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; if ( data != NULL )  data [ 0 ] = 5; free ( data ); 