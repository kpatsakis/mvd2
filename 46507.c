void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54b_goodG2BSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54c_goodG2BSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54d_goodG2BSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54e_goodG2BSink(int data) int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 