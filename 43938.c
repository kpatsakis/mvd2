static void goodG2B() size_t data ; size_t dataArray [ 5 ] ; data = 0; data = 20; dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_66b_goodG2BSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_66b_goodG2BSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 