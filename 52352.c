void CWE690_NULL_Deref_From_Return__int_realloc_32_bad() int * data ; int * * dataPtr1 = & data ; data = NULL; int * data = * dataPtr1 ; data = ( int * ) realloc ( data , 1 * sizeof ( int ) ); * dataPtr1 = data; data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 