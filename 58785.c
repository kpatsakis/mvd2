void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  