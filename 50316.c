static void goodG2B2() int * data ; int * dataGoodBuffer = ( int * ) ALLOCA ( 100 * sizeof ( int ) ) ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 