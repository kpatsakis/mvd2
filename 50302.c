void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_11_bad() int data ; data = - 1; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = RAND32 ( ); size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 