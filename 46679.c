void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_64_bad() int data ; data = - 1; data = RAND32 ( ); CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_64b_badSink ( & data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_64b_badSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 