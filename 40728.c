void CWE401_Memory_Leak__char_realloc_15_bad() char * data ; data = NULL; switch ( 6 )  data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 