void CWE416_Use_After_Free__malloc_free_struct_15_bad() twoIntsStruct * data ; data = NULL; switch ( 6 )  data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] . intOne = 1; data [ i ] . intTwo = 2; free ( data ); 