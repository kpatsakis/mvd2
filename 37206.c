void CWE590_Free_Memory_Not_on_Heap__free_char_static_67_bad() static char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_char_static_67b_badSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_char_static_67b_badSink(CWE590_Free_Memory_Not_on_Heap__free_char_static_67_structType myStruct) char * data = myStruct . structFirst ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 