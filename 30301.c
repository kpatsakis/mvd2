static void goodG2B1() long * data ; data = NULL; if ( staticFive != 5 )  long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; free ( data ); 