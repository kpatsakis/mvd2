void CWE401_Memory_Leak__twoIntsStruct_realloc_68_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__twoIntsStruct_realloc_68_badData = data; 