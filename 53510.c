void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_63_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 