void CWE126_Buffer_Overread__CWE170_char_memcpy_16_bad() while ( 1 )  char data [ 150 ] , dest [ 100 ] ; memset ( data , 'A' , 149 ); data [ 149 ] = '\0'; memcpy ( dest , data , 99 * sizeof ( char ) ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 