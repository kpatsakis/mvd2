void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_bad() wchar_t * data ; data = NULL; data = CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_badSource ( data ); wchar_t * CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_badSource(wchar_t * data) if ( CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_badGlobal )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; free ( data ); 