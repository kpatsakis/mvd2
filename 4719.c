void CWE427_Uncontrolled_Search_Path_Element__char_file_32_bad() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 250 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 