static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_connect_socket_printf_64b_goodG2BSink ( & data ); void CWE134_Uncontrolled_Format_String__char_connect_socket_printf_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; printf ( data ); 