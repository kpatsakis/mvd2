static void good1() if ( 0 )  char password [ 100 ] ; size_t passwordLen ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( ! CryptHashData ( hHash , ( BYTE * ) password , passwordLen , 0 ) )  