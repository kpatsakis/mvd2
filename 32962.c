void CWE134_Uncontrolled_Format_String__char_environment_vprintf_12_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "fixedstringtest" ); badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); badVaSinkG ( data , data ); static void badVaSinkG(char * data, ...) va_start ( args , data ); 