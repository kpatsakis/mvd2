void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad() int data ; data = - 1; data = RAND32 ( ); CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_badSink(int data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_badGlobal )  int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 