void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); badSink ( & data ); void badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; hFile = CreateFileW ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 