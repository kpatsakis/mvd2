void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_07_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 