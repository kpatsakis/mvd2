static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE126_Buffer_Overread__malloc_wchar_t_loop_53b_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_loop_53b_goodG2BSink(wchar_t * data) CWE126_Buffer_Overread__malloc_wchar_t_loop_53c_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_loop_53c_goodG2BSink(wchar_t * data) CWE126_Buffer_Overread__malloc_wchar_t_loop_53d_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_loop_53d_goodG2BSink(wchar_t * data) dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 