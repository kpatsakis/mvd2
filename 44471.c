void CWE690_NULL_Deref_From_Return__int64_t_realloc_53_bad() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_realloc_53b_badSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_53b_badSink(int64_t * data) CWE690_NULL_Deref_From_Return__int64_t_realloc_53c_badSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_53c_badSink(int64_t * data) CWE690_NULL_Deref_From_Return__int64_t_realloc_53d_badSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_53d_badSink(int64_t * data) data [ 0 ] = 5L L free ( data ); 