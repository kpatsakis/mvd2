static void goodG2B2() char * dataGoodBuffer = ( char * ) malloc ( sizeof ( TwoIntsClass ) ) ; data = dataGoodBuffer; TwoIntsClass * classTwo = new ( data ) TwoIntsClass classTwo -> intOne = 5; classTwo -> intTwo = 10; printIntLine ( classTwo -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 