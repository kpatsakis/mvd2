void CWE401_Memory_Leak__int64_t_realloc_67_bad() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); myStruct . structFirst = data; CWE401_Memory_Leak__int64_t_realloc_67b_badSink ( myStruct ); void CWE401_Memory_Leak__int64_t_realloc_67b_badSink(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct) int64_t * data = myStruct . structFirst ; 