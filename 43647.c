void bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_82_bad::action(wchar_t * data) wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 