void CWE590_Free_Memory_Not_on_Heap__free_char_declare_51_bad() char * data ; data = NULL; char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_char_declare_51b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_51b_badSink(char * data) free ( data ); 