static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  data [ 0 ] = '\0'; CWE256_Plaintext_Storage_of_Password__w32_char_53b_goodB2GSink ( data ); void CWE256_Plaintext_Storage_of_Password__w32_char_53b_goodB2GSink(char * data) CWE256_Plaintext_Storage_of_Password__w32_char_53c_goodB2GSink ( data ); void CWE256_Plaintext_Storage_of_Password__w32_char_53c_goodB2GSink(char * data) CWE256_Plaintext_Storage_of_Password__w32_char_53d_goodB2GSink ( data ); void CWE256_Plaintext_Storage_of_Password__w32_char_53d_goodB2GSink(char * data) char hashData [ 100 ] = HASH_INPUT ; HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; BYTE payload [ ( 100 - 1 ) * sizeof ( char ) ] ; DWORD payloadBytes ; payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , data ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) size_t numWritten = 0 ; while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  int byte ; bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  while ( 0 )  