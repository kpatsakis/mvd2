void bad() int64_t * data ; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int64_t *> dataMap) int64_t * data = dataMap [ 2 ] ; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 