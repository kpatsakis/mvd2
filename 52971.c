void CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_17_bad() int i ; wchar_t * data ; wchar_t dataBuffer [ 250 ] = L "PATH=" data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; if ( 250 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 250 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 