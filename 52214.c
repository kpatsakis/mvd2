static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_61b_goodG2BSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_61b_goodG2BSource(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 