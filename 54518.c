void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_52_bad() char * data ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_52b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_52c_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 