void bad() void * data ; void * & dataRef = data ; data = NULL; data = ( void * ) WIDE_STRING; void * data = dataRef ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 