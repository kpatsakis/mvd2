void bad() char * data ; data = new char [ 100 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad(char * dataCopy) data = dataCopy; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_84_bad() char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 