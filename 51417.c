void CWE194_Unexpected_Sign_Extension__negative_malloc_68b_badSink() short data = CWE194_Unexpected_Sign_Extension__negative_malloc_68_badData ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 