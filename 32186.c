void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  