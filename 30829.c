void CWE416_Use_After_Free__return_freed_ptr_10_bad() if ( globalTrue )  char * reversedString = helperBad ( "BadSink" ) ; static char * helperBad(char * aString) if ( aString != NULL )  i = strlen ( aString ); reversedString = ( char * ) malloc ( i + 1 ); for (j = 0; j < i; j++) reversedString [ j ] = aString [ i - j - 1 ]; reversedString [ i ] = '\0'; free ( reversedString ); return reversedString ; 