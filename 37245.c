void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); badSource ( data ); static void badSource(wchar_t * &data) size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 