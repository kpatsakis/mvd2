void CWE427_Uncontrolled_Search_Path_Element__char_console_61_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; data = CWE427_Uncontrolled_Search_Path_Element__char_console_61b_badSource ( data ); char * CWE427_Uncontrolled_Search_Path_Element__char_console_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; if ( 250 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 250 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; return data ; 