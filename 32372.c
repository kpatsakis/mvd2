static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE134_Uncontrolled_Format_String__char_environment_vprintf_61b_goodB2GSource ( data ); char * CWE134_Uncontrolled_Format_String__char_environment_vprintf_61b_goodB2GSource(char * data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 