static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53b_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53c_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53c_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53d_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_53d_goodG2BSink(char * data) goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 