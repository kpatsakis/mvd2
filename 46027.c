void CWE114_Process_Control__w32_char_file_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); dataArray [ 2 ] = data; CWE114_Process_Control__w32_char_file_66b_badSink ( dataArray ); void CWE114_Process_Control__w32_char_file_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 