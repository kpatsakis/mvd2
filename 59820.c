void CWE401_Memory_Leak__malloc_realloc_int_02_bad() if ( 1 )  int * data = ( int * ) malloc ( 100 * sizeof ( int ) ) ; data [ 0 ] = 5; data = ( int * ) realloc ( data , ( 130000 ) * sizeof ( int ) ); if ( data != NULL )  data [ 0 ] = 10; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 