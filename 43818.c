static void goodG2B() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_structType myStruct ; char dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 