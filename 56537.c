static void goodB2G() int64_t * data ; data = NULL; data = goodB2GSource ( data ); static int64_t * goodB2GSource(int64_t * data) data = ( int64_t * ) calloc ( 100 , sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); return data ; 