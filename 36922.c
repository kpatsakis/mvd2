void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_21_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 