void CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_17_bad() int i , j ; wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' for(j = 0; j < 1; j++) badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 