void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_63_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_63b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wprintf ( data ); 