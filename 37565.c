void CWE690_NULL_Deref_From_Return__char_malloc_34_bad() char * data ; CWE690_NULL_Deref_From_Return__char_malloc_34_unionType myUnion ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 