static void goodG2B2() twoIntsStruct * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; free ( data ); 