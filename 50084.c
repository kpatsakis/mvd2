void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54b_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54c_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54c_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54d_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54d_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54e_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_54e_badSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 