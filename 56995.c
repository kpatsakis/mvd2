static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_goodG2BSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); free ( data ); 