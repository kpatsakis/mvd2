void CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53b_badSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53b_badSink(wchar_t * data) CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53c_badSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53c_badSink(wchar_t * data) CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53d_badSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memmove_53d_badSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 