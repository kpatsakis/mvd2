static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_41_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_41_goodG2BSink(wchar_t * data) wcsncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 