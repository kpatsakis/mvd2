void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_14_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( globalFive == 5 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 