static void goodG2B2() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = goodG2B2Source ( data ); static char * goodG2B2Source(char * data) if ( goodG2B2Static )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; free ( data ); 