void CWE78_OS_Command_Injection__char_file_execl_61_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE78_OS_Command_Injection__char_file_execl_61b_badSource ( data ); char * CWE78_OS_Command_Injection__char_file_execl_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; return data ; 