void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_file_ofstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__wchar_t_file_ofstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__wchar_t_file_ofstream_84_bad::CWE36_Absolute_Path_Traversal__wchar_t_file_ofstream_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 