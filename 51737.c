void bad() int i ; wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 