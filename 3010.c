void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_11_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( 50 * sizeof ( char ) ) ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 