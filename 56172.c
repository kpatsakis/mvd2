void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); inputFile . open ( ( char * ) data ); 