void CWE327_Use_Broken_Crypto__w32_3DES_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char password [ 100 ] ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( ! CryptHashData ( hHash , ( BYTE * ) password , passwordLen , 0 ) )  