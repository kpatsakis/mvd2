void CWE606_Unchecked_Loop_Condition__char_listen_socket_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = data; CWE606_Unchecked_Loop_Condition__char_listen_socket_67b_badSink ( myStruct ); void CWE606_Unchecked_Loop_Condition__char_listen_socket_67b_badSink(CWE606_Unchecked_Loop_Condition__char_listen_socket_67_structType myStruct) char * data = myStruct . structFirst ; if ( sscanf ( data , "%d" , & n ) == 1 )  