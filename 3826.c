void CWE78_OS_Command_Injection__char_file_w32_execv_21_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; return data ; 