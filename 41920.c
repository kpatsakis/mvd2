static void goodB2G() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t * * dataPtr2 = & data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' wchar_t * data = * dataPtr2 ; size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  