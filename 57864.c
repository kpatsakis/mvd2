static void goodG2B() char * data ; data = NULL; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE126_Buffer_Overread__new_char_memcpy_82_base * baseObject = new CWE126_Buffer_Overread__new_char_memcpy_82_goodG2B baseObject -> action ( data ); void CWE126_Buffer_Overread__new_char_memcpy_82_goodG2B::action(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 