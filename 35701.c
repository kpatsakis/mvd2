void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_67_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wcsncpy ( dest , data , wcslen ( data ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 