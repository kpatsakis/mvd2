static void goodG2B() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); dataArray [ 2 ] = data; CWE114_Process_Control__w32_char_relativePath_66b_goodG2BSink ( dataArray ); void CWE114_Process_Control__w32_char_relativePath_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 