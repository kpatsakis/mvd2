void CWE690_NULL_Deref_From_Return__wchar_t_malloc_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__wchar_t_malloc_66b_badSink ( dataArray ); void CWE690_NULL_Deref_From_Return__wchar_t_malloc_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wcscpy ( data , L "Initialize" ) free ( data ); 