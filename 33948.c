static void goodB2G() int64_t * data ; CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType myStruct ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__int64_t_realloc_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType myStruct) int64_t * data = myStruct . structFirst ; if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 