void CWE401_Memory_Leak__strdup_char_41_bad() char * data ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); badSink ( data ); static void badSink(char * data) 