static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); char * goodG2B2Source(char * data) if ( goodG2B2Global )  data = new char [ 100 ]; data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 