static void goodG2B1() char * data ; data = NULL; if ( 0 )  data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 