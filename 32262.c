static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_fprintf_54b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_54b_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_fprintf_54c_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_54c_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_fprintf_54d_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_54d_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_environment_fprintf_54e_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_54e_goodB2GSink(char * data) fprintf ( stdout , "%s\n" , data ); 