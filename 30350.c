void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_bad() struct _twoIntsStruct * data ; data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); myStruct . structFirst = data; CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_badSink ( myStruct ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_badSink(CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType myStruct) struct _twoIntsStruct * data = myStruct . structFirst ; 