static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE256_Plaintext_Storage_of_Password__w32_char_84_goodG2B * goodG2BObject = new CWE256_Plaintext_Storage_of_Password__w32_char_84_goodG2B ( data ) ; CWE256_Plaintext_Storage_of_Password__w32_char_84_goodG2B::CWE256_Plaintext_Storage_of_Password__w32_char_84_goodG2B(char * dataCopy) FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; fclose ( pFile ); 