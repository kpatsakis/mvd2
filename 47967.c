static void goodG2B1() int * data ; data = NULL; if ( GLOBAL_CONST_FIVE != 5 )  data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 