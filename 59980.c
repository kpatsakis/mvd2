void CWE194_Unexpected_Sign_Extension__rand_malloc_21_bad() short data ; data = 0; data = badSource ( data ); static short badSource(short data) if ( badStatic )  data = ( short ) RAND32 ( ); return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 