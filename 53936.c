void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_05_bad() wchar_t * data ; wchar_t * dataBadBuffer = ( wchar_t * ) ALLOCA ( ( 10 ) * sizeof ( wchar_t ) ) ; if ( staticTrue )  data = dataBadBuffer; data [ 0 ] = L '\0' wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 