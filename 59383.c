static void goodB2G1() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); goodB2G1Sink ( data ); static void goodB2G1Sink(int64_t * data) if ( data != NULL )  data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 