void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_08_bad() int * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int * ) malloc ( 10 ); data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 