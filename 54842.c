void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_51_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_51b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_51b_badSink(char * data) char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 