static void goodB2G() wchar_t * data ; data = NULL; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) CWE401_Memory_Leak__wchar_t_calloc_52b_goodB2GSink ( data ); void CWE401_Memory_Leak__wchar_t_calloc_52b_goodB2GSink(wchar_t * data) CWE401_Memory_Leak__wchar_t_calloc_52c_goodB2GSink ( data ); void CWE401_Memory_Leak__wchar_t_calloc_52c_goodB2GSink(wchar_t * data) free ( data ); 