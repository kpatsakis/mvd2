static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodB2G * goodB2GObject = new CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodB2G ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodB2G::CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  