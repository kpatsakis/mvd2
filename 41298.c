void bad() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; * dataPtr1 = data; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 