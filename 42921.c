void CWE114_Process_Control__w32_char_environment_51_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE114_Process_Control__w32_char_environment_51b_badSink ( data ); void CWE114_Process_Control__w32_char_environment_51b_badSink(char * data) hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 