static void goodG2B2() wchar_t * data ; data = NULL; data = CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_22_goodG2B2Source ( data ); wchar_t * CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_22_goodG2B2Source(wchar_t * data) if ( CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_22_goodG2B2Global )  wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 