void bad() char * data ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_82_bad::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 