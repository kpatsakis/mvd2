static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; strcpy ( data , "fixedstringtest" ); goodG2B1VaSinkB ( data , data ); static void goodG2B1VaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 