void CWE426_Untrusted_Search_Path__char_popen_34_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , BAD_OS_COMMAND ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 