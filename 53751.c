static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_51b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_51b_goodG2BSink(char * data) goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 