void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64_bad() int * data ; data = NULL; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64b_badSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; int source [ 10 ] = { 0 } ; size_t i ; for (i = 0; i < 10; i++) data [ i ] = source [ i ]; free ( data ); 