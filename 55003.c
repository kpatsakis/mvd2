static void goodG2B2() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = goodG2B2Source ( data ); static char * goodG2B2Source(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 