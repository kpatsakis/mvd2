void CWE401_Memory_Leak__strdup_char_22_bad() char * data ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__strdup_char_22_badSink ( data ); void CWE401_Memory_Leak__strdup_char_22_badSink(char * data) 