void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_bad() struct _twoIntsStruct * data ; data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_badSink ( & data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_badSink(struct _twoIntsStruct * * dataPtr) struct _twoIntsStruct * data = * dataPtr ; 