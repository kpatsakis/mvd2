void CWE427_Uncontrolled_Search_Path_Element__char_file_44_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 250 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 250 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); funcPtr ( data ); 