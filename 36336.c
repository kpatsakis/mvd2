void CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnvp_67_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnvp_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnvp_67b_badSink(CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnvp_67_structType myStruct) wchar_t * data = myStruct . structFirst ; 