void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad() twoIntsStruct * data ; data = NULL; data = badSource ( data ); static twoIntsStruct * badSource(twoIntsStruct * data) if ( badStatic )  data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; return data ; 