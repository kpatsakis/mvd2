void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) badSink_d ( data ); void badSink_d(char * data) hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 