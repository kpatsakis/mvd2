static void goodG2B1() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( GLOBAL_CONST_FALSE )  wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 