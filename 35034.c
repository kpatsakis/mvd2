void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_bad() twoIntsStruct * data ; data = NULL; twoIntsStruct * dataBuffer = ( twoIntsStruct * ) ALLOCA ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_badSink(twoIntsStruct * data) CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_badSink(twoIntsStruct * data) CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_badSink(twoIntsStruct * data) free ( data ); 