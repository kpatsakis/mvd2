void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_12_bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 