void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) badSink_d ( data ); void badSink_d(char * data) badSink_e ( data ); void badSink_e(char * data) outputFile . open ( ( char * ) data ); 