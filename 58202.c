void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; CWE23_Relative_Path_Traversal__wchar_t_listen_socket_w32CreateFile_84_bad * badObject = new CWE23_Relative_Path_Traversal__wchar_t_listen_socket_w32CreateFile_84_bad ( data ) ; CWE23_Relative_Path_Traversal__wchar_t_listen_socket_w32CreateFile_84_bad::CWE23_Relative_Path_Traversal__wchar_t_listen_socket_w32CreateFile_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  