static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; FILE * pFile ; HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; char hashData [ 100 ] = HASH_INPUT ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  data [ 0 ] = '\0'; BYTE payload [ ( 100 - 1 ) * sizeof ( char ) ] ; DWORD payloadBytes ; payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , data ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) size_t numWritten = 0 ; while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  int byte ; bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  memcpy ( data , payload , payloadBytes ); data [ payloadBytes / sizeof ( char ) ] = '\0'; while ( 0 )  CWE256_Plaintext_Storage_of_Password__w32_char_68_goodG2BData = data; 