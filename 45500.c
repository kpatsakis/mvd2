static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); 