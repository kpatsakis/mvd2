void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_66_bad() char * data ; char * dataArray [ 5 ] ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 