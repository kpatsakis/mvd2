static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_calloc_63b_goodB2GSink ( & data ); void CWE690_NULL_Deref_From_Return__struct_calloc_63b_goodB2GSink(twoIntsStruct * * dataPtr) twoIntsStruct * data = * dataPtr ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 