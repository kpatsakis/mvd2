static void goodG2B() int * data ; data = NULL; while ( 1 )  data = ( int * ) malloc ( 100 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 