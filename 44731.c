void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad() int data ; data = - 1; data = 10; int dataCopy = data ; int data = dataCopy ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 