static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , GOOD_OS_COMMAND ); CWE426_Untrusted_Search_Path__char_popen_64b_goodG2BSink ( & data ); void CWE426_Untrusted_Search_Path__char_popen_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 