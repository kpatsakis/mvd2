static void goodG2B() short data ; data = 0; CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B * goodG2BObject = new CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B ( data ) ; CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B::CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B(short dataCopy) data = dataCopy; data = 100 - 1; delete goodG2BObject CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B::~CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_84_goodG2B() char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 