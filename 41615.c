void bad() int data ; int & dataRef = data ; data = - 1; data = RAND32 ( ); int data = dataRef ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 