static void goodB2G() size_t data ; data = 0; goodB2GSink ( & data ); void goodB2GSink(size_t * dataPtr) size_t data = * dataPtr ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 