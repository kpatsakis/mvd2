static void goodG2B() int data ; data = - 1; data = 20; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53b_goodG2BSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53b_goodG2BSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53c_goodG2BSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53c_goodG2BSink(int data) CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53d_goodG2BSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_listen_socket_53d_goodG2BSink(int data) int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 