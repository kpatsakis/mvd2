void CWE427_Uncontrolled_Search_Path_Element__char_file_08_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; if ( 250 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 250 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; PUTENV ( data ); 