void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_14_bad() int * data ; data = NULL; if ( globalFive == 5 )  data = ( int * ) ALLOCA ( 10 ); int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 