void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_12_bad() int data ; data = - 1; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = 20; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 