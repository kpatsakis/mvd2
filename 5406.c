void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_63_bad() wchar_t * password ; password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  wcscpy ( password , L "Password1234!" ) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_63b_badSink ( & password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_63b_badSink(wchar_t * * passwordPtr) wchar_t * password = * passwordPtr ; if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 