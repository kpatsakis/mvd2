static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_64b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 