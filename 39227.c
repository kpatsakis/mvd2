static void goodG2B2() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; switch ( 6 )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 