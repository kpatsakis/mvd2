void CWE90_LDAP_Injection__w32_wchar_t_console_32_bad() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ 256 ] = L "" data = dataBuffer; wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 256 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 