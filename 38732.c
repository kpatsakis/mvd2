static void goodG2B() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( ( 10 + 1 ) * sizeof ( char ) ) ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 