void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_17_bad() int i , j ; size_t data ; data = 0; for(j = 0; j < 1; j++) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 