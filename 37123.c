static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char data [ 150 ] , dest [ 100 ] ; memset ( data , 'A' , 149 ); data [ 149 ] = '\0'; strncpy ( dest , data , 99 ); dest [ 99 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); strncpy ( dest , data , 99 ); dest [ 99 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 