void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52b_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52b_badSink(wchar_t * data) CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52c_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52c_badSink(wchar_t * data) badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) va_start ( args , data ); _vsnwprintf ( dest , 100 - 1 , data , args ); 