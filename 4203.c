static void goodG2B() int data ; int dataArray [ 5 ] ; data = - 1; data = 100 - 1; dataArray [ 2 ] = data; CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_66b_goodG2BSink ( dataArray ); void CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_66b_goodG2BSink(int dataArray[]) int data = dataArray [ 2 ] ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 