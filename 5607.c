void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_17_bad() int i ; char * data ; char dataBadBuffer [ 50 ] ; for(i = 0; i < 1; i++) data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 