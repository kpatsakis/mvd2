void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_bad() int * data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 