static void goodG2B() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_34_unionType myUnion ; data = 0; data = 20; myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 