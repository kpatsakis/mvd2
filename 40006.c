static void goodG2B() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B * goodG2BObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B::CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B(size_t dataCopy) data = dataCopy; data = 20; delete goodG2BObject CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B::~CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodG2B() wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 