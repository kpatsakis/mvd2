static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE416_Use_After_Free__malloc_free_char_63b_goodG2BSink ( & data ); void CWE416_Use_After_Free__malloc_free_char_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 