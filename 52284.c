void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_84_bad::CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); 