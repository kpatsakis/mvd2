static void goodG2B() wchar_t * data ; data = NULL; data = CWE126_Buffer_Overread__malloc_wchar_t_memcpy_61b_goodG2BSource ( data ); wchar_t * CWE126_Buffer_Overread__malloc_wchar_t_memcpy_61b_goodG2BSource(wchar_t * data) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 