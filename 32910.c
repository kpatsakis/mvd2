static void goodG2B2() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 