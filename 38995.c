void CWE78_OS_Command_Injection__char_connect_socket_system_21_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char * replace ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; if ( replace )  * replace = '\0'; while ( 0 )  