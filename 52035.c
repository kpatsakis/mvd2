void CWE401_Memory_Leak__int64_t_realloc_64_bad() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); CWE401_Memory_Leak__int64_t_realloc_64b_badSink ( & data ); void CWE401_Memory_Leak__int64_t_realloc_64b_badSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; 