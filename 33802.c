static void goodG2B() short data ; data = 0; CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B * goodG2BObject = new CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B ( data ) ; CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B::CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B(short dataCopy) data = dataCopy; data = 100 - 1; delete goodG2BObject CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B::~CWE194_Unexpected_Sign_Extension__listen_socket_malloc_84_goodG2B() if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 