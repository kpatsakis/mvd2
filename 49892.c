static void goodB2G1() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); if ( globalFalse )  size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  