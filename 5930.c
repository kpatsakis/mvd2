void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad() double * data ; data = NULL; data = ( double * ) malloc ( sizeof ( data ) ); * data = 1.7E300; CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_badSink(void * dataVoidPtr) double * * dataPtr = ( double * * ) dataVoidPtr ; double * data = ( * dataPtr ) ; free ( data ); 