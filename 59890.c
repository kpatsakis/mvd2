static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53c_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_53d_goodG2BSink(wchar_t * data) SNPRINTF ( data , 100 , L "%s" , source ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 