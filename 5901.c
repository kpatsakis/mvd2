static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_82_goodG2B::action(char * data) size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 