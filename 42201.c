static void goodG2B() int h ; int * data ; int * dataGoodBuffer = ( int * ) ALLOCA ( 100 * sizeof ( int ) ) ; for(h = 0; h < 1; h++) data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 