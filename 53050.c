void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_64_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_64b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) va_start ( args , data ); _vsnwprintf ( dest , 100 - 1 , data , args ); 