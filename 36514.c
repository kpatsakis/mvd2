static void goodB2G() long * data ; CWE690_NULL_Deref_From_Return__long_calloc_67_structType myStruct ; data = NULL; data = ( long * ) calloc ( 1 , sizeof ( long ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__long_calloc_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__long_calloc_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__long_calloc_67_structType myStruct) long * data = myStruct . structFirst ; if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 