void bad() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); * dataPtr1 = data; hFile = CreateFileW ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 