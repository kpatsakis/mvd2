void CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_64_bad() int64_t * data ; data = NULL; int64_t dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_64b_badSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_64b_badSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; free ( data ); 