void bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 250 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 250 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); 