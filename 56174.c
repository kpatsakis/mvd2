void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_42_bad() size_t data ; data = 0; data = badSource ( data ); static size_t badSource(size_t data) data = rand ( ); return data ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 