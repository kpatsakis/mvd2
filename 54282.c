void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_53d_badSink(char * data) fprintf ( stdout , data ); 