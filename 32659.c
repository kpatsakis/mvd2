void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_64_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_64b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memmove_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 