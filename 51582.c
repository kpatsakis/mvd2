static void goodB2G() int data ; data = 0; CWE191_Integer_Underflow__int_connect_socket_sub_84_goodB2G * goodB2GObject = new CWE191_Integer_Underflow__int_connect_socket_sub_84_goodB2G ( data ) ; CWE191_Integer_Underflow__int_connect_socket_sub_84_goodB2G::CWE191_Integer_Underflow__int_connect_socket_sub_84_goodB2G(int dataCopy) WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  