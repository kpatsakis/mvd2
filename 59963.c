void CWE535_Info_Exposure_Shell_Error__w32_wchar_t_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wchar_t password [ 100 ] = L "" if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  if ( passwordLen > 0 )  