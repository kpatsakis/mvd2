void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memmove_63_bad() wchar_t * data ; wchar_t * dataBadBuffer = ( wchar_t * ) ALLOCA ( ( 10 ) * sizeof ( wchar_t ) ) ; data = dataBadBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memmove_63b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memmove_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 