static void goodG2B() char * data ; data = NULL; data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "a string" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__strdup_char_68_goodG2BData = data; 