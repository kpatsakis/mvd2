void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_21_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' badSink ( data ); static void badSink(wchar_t * data) if ( badStatic )  free ( data ); 