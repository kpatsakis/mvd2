static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; free ( data ); 