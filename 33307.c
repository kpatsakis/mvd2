void CWE127_Buffer_Underread__new_char_memcpy_81_goodG2B::action(char * data) const char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 