static void goodG2B() double * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( double * ) malloc ( sizeof ( * data ) ); * data = 1.7E300; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 