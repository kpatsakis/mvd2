static void good1() if ( STATIC_CONST_FALSE )  char * reversedString = helperGood ( "GoodSink" ) ; static char * helperGood(char * aString) if ( aString != NULL )  i = strlen ( aString ); reversedString = ( char * ) malloc ( i + 1 ); reversedString [ j ] = aString [ i - j - 1 ]; reversedString [ i ] = '\0'; return reversedString ; 