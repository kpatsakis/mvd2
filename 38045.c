void bad() char * data ; data = new char [ 100 ]; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 