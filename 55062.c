static void goodB2G() vector < char * > dataVector ; goodB2GSink ( dataVector ); void goodB2GSink(vector<char *> dataVector) char * data = dataVector [ 2 ] ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 