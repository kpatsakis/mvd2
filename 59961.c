void bad() char * data ; char dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_82_bad::action(char * data) char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 