void CWE590_Free_Memory_Not_on_Heap__free_char_static_63_bad() static char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_char_static_63b_badSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_char_static_63b_badSink(char * * dataPtr) char * data = * dataPtr ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 