static void goodB2G() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t passwordLen = strlen ( password ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  if ( listenSocket != INVALID_SOCKET )  closesocket ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  closesocket ( acceptSocket ); myUnion . unionFirst = password; char * password = myUnion . unionSecond ; payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , password ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  sscanf ( & hex [ 2 * numWritten ] , "%02x" , & byte ); bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; SecureZeroMemory ( password , 100 * sizeof ( char ) ); memcpy ( password , payload , payloadBytes ); password [ payloadBytes / sizeof ( char ) ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  