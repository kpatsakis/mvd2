static void goodG2B1() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strcat ( dest , data ); 