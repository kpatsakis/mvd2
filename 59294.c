void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_52_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_52b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_52c_badSink(wchar_t * data) wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 