void CWE127_Buffer_Underread__malloc_wchar_t_loop_63_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_wchar_t_loop_63b_badSink ( & data ); void CWE127_Buffer_Underread__malloc_wchar_t_loop_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 