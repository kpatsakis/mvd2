static void goodG2B() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( ( 10 + 1 ) * sizeof ( char ) ) ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_82_goodG2B::action(char * data) char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) 