void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_06_bad() wchar_t * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = wcslen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 