static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodB2GSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodB2GSink(twoIntsStruct * data) free ( data ); 