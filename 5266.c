static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); goodB2GSink ( data ); static void goodB2GSink(char * data) free ( data ); 