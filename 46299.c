static void goodB2G() void * data ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; CWE122_Heap_Based_Buffer_Overflow__CWE135_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__CWE135_82_goodB2G baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_82_goodB2G::action(void * data) size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 