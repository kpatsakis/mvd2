void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_32_bad() char * data ; char * * dataPtr1 = & data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; * dataPtr1 = data; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 