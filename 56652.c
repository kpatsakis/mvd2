void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_64_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_64b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 