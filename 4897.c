void bad() int * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad::CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad(int * dataCopy) data = dataCopy; data = ( int * ) malloc ( 10 ); delete badObject CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad::~CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_84_bad() int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 