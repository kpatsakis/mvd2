void CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_06_bad() if ( STATIC_CONST_FIVE == 5 )  BYTE payload [ 100 ] ; DWORD payloadLen = strlen ( PAYLOAD ) ; HCRYPTPROV hCryptProv = ( HCRYPTPROV ) NULL ; HCRYPTHASH hHash = ( HCRYPTHASH ) NULL ; HCRYPTKEY hKey = ( HCRYPTKEY ) NULL ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptEncrypt ( hKey , 0 , 1 , 0 , payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  