static void goodG2B2() twoIntsStruct * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( twoIntsStruct * ) malloc ( sizeof ( * data ) ); data -> intOne = 1; data -> intTwo = 2; printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 