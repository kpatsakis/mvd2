void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 