void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; inputFile . open ( ( char * ) data ); 