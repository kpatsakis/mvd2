void CWE401_Memory_Leak__char_malloc_09_bad() char * data ; data = NULL; if ( GLOBAL_CONST_TRUE )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 