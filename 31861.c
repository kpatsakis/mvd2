void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_bad() int64_t * data ; data = NULL; data = badSource ( data ); static int64_t * badSource(int64_t * data) if ( badStatic )  data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); return data ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 