static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE127_Buffer_Underread__wchar_t_declare_cpy_53b_goodG2BSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_cpy_53b_goodG2BSink(wchar_t * data) CWE127_Buffer_Underread__wchar_t_declare_cpy_53c_goodG2BSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_cpy_53c_goodG2BSink(wchar_t * data) CWE127_Buffer_Underread__wchar_t_declare_cpy_53d_goodG2BSink ( data ); void CWE127_Buffer_Underread__wchar_t_declare_cpy_53d_goodG2BSink(wchar_t * data) wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 