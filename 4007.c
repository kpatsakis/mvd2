static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_84_goodB2G * goodB2GObject = new CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_84_goodB2G ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_84_goodB2G::CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); 