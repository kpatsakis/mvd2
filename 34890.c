void CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_05_bad() wchar_t * data ; wchar_t dataBuffer [ 250 ] = L "PATH=" data = dataBuffer; if ( staticTrue )  size_t dataLen = wcslen ( data ) ; if ( 250 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 250 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 