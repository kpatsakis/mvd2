static void goodG2B() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 