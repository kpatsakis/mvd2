void CWE124_Buffer_Underwrite__wchar_t_declare_cpy_68b_goodG2BSink() wchar_t * data = CWE124_Buffer_Underwrite__wchar_t_declare_cpy_68_goodG2BData ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 