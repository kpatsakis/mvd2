static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 5 == 5 )  strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 