static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , GOOD_OS_COMMAND ); CWE426_Untrusted_Search_Path__char_system_53b_goodG2BSink ( data ); void CWE426_Untrusted_Search_Path__char_system_53b_goodG2BSink(char * data) CWE426_Untrusted_Search_Path__char_system_53c_goodG2BSink ( data ); void CWE426_Untrusted_Search_Path__char_system_53c_goodG2BSink(char * data) CWE426_Untrusted_Search_Path__char_system_53d_goodG2BSink ( data ); void CWE426_Untrusted_Search_Path__char_system_53d_goodG2BSink(char * data) if ( SYSTEM ( data ) <= 0 )  