void bad() wchar_t * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad(wchar_t * dataCopy) data = dataCopy; data = new wchar_t [ 50 ]; data [ 0 ] = L '\0' delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_wchar_t_ncat_84_bad() wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 