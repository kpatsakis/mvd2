void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; hFile = CreateFileW ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 