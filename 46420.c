void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); inputFile . open ( ( char * ) data ); 