static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53b_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53b_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53c_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53c_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53d_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_53d_goodG2BSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 