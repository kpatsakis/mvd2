void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54b_goodG2BSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54c_goodG2BSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54d_goodG2BSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_54e_goodG2BSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 