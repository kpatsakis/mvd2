void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_17_bad() int i ; char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; for(i = 0; i < 1; i++) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 