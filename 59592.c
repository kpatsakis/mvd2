static void goodG2B() twoIntsStruct * data ; CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_structType myStruct ; data = NULL; twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_goodG2BSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_goodG2BSink(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; free ( data ); 