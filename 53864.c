static void goodB2G() long * data ; long * * dataPtr1 = & data ; data = NULL; long * data = * dataPtr1 ; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); * dataPtr1 = data; if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 