void CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_17_bad() int i ; int64_t * data ; data = NULL; for(i = 0; i < 1; i++) int64_t dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; free ( data ); 