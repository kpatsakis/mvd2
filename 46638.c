void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; CWE36_Absolute_Path_Traversal__char_connect_socket_open_84_bad * badObject = new CWE36_Absolute_Path_Traversal__char_connect_socket_open_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__char_connect_socket_open_84_bad::CWE36_Absolute_Path_Traversal__char_connect_socket_open_84_bad(char * dataCopy) data = dataCopy; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char * replace ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  