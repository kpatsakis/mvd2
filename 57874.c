void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_bad() struct _twoIntsStruct * data ; data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_badSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_badSink(struct _twoIntsStruct * data) CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_badSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_badSink(struct _twoIntsStruct * data) 