static void goodG2B1() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_22_goodG2B1Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_22_goodG2B1Source(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_22_goodG2B1Global )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 