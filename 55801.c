void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_12_bad() char * data ; char dataBadBuffer [ 50 ] ; char dataGoodBuffer [ 100 ] ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = dataBadBuffer; data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 