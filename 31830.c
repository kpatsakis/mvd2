void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_05_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( staticTrue )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 