void CWE127_Buffer_Underread__malloc_wchar_t_cpy_51_bad() wchar_t * data ; data = NULL; wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_wchar_t_cpy_51b_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_51b_badSink(wchar_t * data) wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 