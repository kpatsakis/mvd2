void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54b_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54c_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54d_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_54e_badSink(int * data) int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 