void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE114_Process_Control__w32_char_file_84_bad * badObject = new CWE114_Process_Control__w32_char_file_84_bad ( data ) ; CWE114_Process_Control__w32_char_file_84_bad::CWE114_Process_Control__w32_char_file_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  printLine ( "fgets() failed" ); data [ dataLen ] = '\0'; fclose ( pFile ); delete badObject CWE114_Process_Control__w32_char_file_84_bad::~CWE114_Process_Control__w32_char_file_84_bad() HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 