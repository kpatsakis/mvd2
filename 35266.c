void bad() static char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; badSink ( & data ); void badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 