void CWE475_Undefined_Behavior_for_Input_to_API__char_03_bad() if ( 5 == 5 )  char dataBuffer [ 100 ] = "" ; char * data = dataBuffer ; strcpy ( data , "abcdefghijklmnopqrstuvwxyz" ); memcpy ( data + 6 , data + 4 , 10 * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 