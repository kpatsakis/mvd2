void bad() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 