void CWE506_Embedded_Malicious_Code__w32_base64_encoded_payload_10_bad() if ( globalTrue )  char * encodedPayload = "Y2FsYy5leGU=" ; BYTE * decodedPayload = NULL ; DWORD requiredLength ; if ( ! CryptStringToBinaryA ( encodedPayload , strlen ( encodedPayload ) , CRYPT_STRING_BASE64 , NULL , & requiredLength , NULL , NULL ) )  decodedPayload = ( BYTE * ) malloc ( requiredLength + 1 ); if ( decodedPayload == NULL )  if ( ! CryptStringToBinaryA ( encodedPayload , strlen ( encodedPayload ) , CRYPT_STRING_BASE64 , decodedPayload , & requiredLength , NULL , NULL ) )  while ( 0 )  free ( decodedPayload ); 