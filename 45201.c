void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_16_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; while ( 1 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 