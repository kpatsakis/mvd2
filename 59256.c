static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_64b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); free ( data ); 