static void goodB2G() twoIntsStruct * data ; data = NULL; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); goodB2GSink ( & data ); void goodB2GSink(void * dataVoidPtr) twoIntsStruct * * dataPtr = ( twoIntsStruct * * ) dataVoidPtr ; twoIntsStruct * data = ( * dataPtr ) ; free ( data ); 