static void goodG2B() char * data ; data = NULL; data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); myStruct . structFirst = data; CWE401_Memory_Leak__char_realloc_67b_goodG2BSink ( myStruct ); void CWE401_Memory_Leak__char_realloc_67b_goodG2BSink(CWE401_Memory_Leak__char_realloc_67_structType myStruct) char * data = myStruct . structFirst ; 