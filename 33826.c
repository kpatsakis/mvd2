static void goodB2G() struct _twoIntsStruct * data ; data = NULL; data = ( struct _twoIntsStruct * ) realloc ( data , 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodB2GSink ( & data ); void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodB2GSink(void * dataVoidPtr) struct _twoIntsStruct * * dataPtr = ( struct _twoIntsStruct * * ) dataVoidPtr ; struct _twoIntsStruct * data = ( * dataPtr ) ; free ( data ); 