void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_17_bad() int i , j ; size_t data ; data = 0; for(i = 0; i < 1; i++) data = rand ( ); for(j = 0; j < 1; j++) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 