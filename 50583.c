void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_51_bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_51b_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_51b_badSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 