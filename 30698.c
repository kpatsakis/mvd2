static void goodG2B1() char * data ; data = new char [ 100 ]; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 