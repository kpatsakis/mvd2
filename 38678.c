static void good1() if ( staticFalse )  char password [ 100 ] = "" ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; passwordLen = strlen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( char ) ); 