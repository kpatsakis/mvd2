static void good2() if ( globalTrue )  double * data ; data = ( double * ) malloc ( sizeof ( double ) ); * data = 5.0; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 