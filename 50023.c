void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; data = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badSource ( data ); char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badSource(char * data) if ( CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badGlobal )  size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 250 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; return data ; 