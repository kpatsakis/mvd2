void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE134_Uncontrolled_Format_String__char_console_snprintf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__char_console_snprintf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__char_console_snprintf_84_bad::CWE134_Uncontrolled_Format_String__char_console_snprintf_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; 