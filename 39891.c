static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_82_goodG2B baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_82_goodG2B::action(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 