static void goodG2B() char * data ; char * & dataRef = data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = dataRef ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 