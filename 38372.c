void CWE401_Memory_Leak__malloc_realloc_struct_twoIntsStruct_13_bad() if ( GLOBAL_CONST_FIVE == 5 )  struct _twoIntsStruct * data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ) ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; data = ( struct _twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( struct _twoIntsStruct ) ); if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 