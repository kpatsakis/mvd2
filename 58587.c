void CWE690_NULL_Deref_From_Return__int_realloc_53_bad() int * data ; data = NULL; data = ( int * ) realloc ( data , 1 * sizeof ( int ) ); CWE690_NULL_Deref_From_Return__int_realloc_53b_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_realloc_53b_badSink(int * data) CWE690_NULL_Deref_From_Return__int_realloc_53c_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_realloc_53c_badSink(int * data) CWE690_NULL_Deref_From_Return__int_realloc_53d_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_realloc_53d_badSink(int * data) data [ 0 ] = 5; free ( data ); 