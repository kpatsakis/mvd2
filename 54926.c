void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_34_bad() wchar_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_34_unionType myUnion ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wchar_t dest [ 50 ] = L "" wcsncpy ( dest , data , wcslen ( data ) ); 