static void goodB2G1() struct _twoIntsStruct * data ; data = NULL; data = ( struct _twoIntsStruct * ) calloc ( 100 , sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Sink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Sink(struct _twoIntsStruct * data) if ( CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Global )  free ( data ); 