void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_66_bad() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 