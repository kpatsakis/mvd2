void CWE124_Buffer_Underwrite__char_declare_memmove_66_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; dataArray [ 2 ] = data; CWE124_Buffer_Underwrite__char_declare_memmove_66b_badSink ( dataArray ); void CWE124_Buffer_Underwrite__char_declare_memmove_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 