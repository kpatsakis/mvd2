void bad() int i , j ; size_t data ; data = 0; for(i = 0; i < 1; i++) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); for(j = 0; j < 1; j++) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 