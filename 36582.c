void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_32_bad() int data ; int * dataPtr2 = & data ; data = - 1; data = RAND32 ( ); int data = * dataPtr2 ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 