void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_bad() int * data ; data = NULL; if ( staticTrue )  data = ( int * ) malloc ( 50 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 