void CWE690_NULL_Deref_From_Return__int64_t_realloc_63_bad() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_realloc_63b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_63b_badSink(int64_t * * dataPtr) int64_t * data = * dataPtr ; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 