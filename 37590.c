static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_file_fprintf_53b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_53b_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_file_fprintf_53c_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_53c_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_file_fprintf_53d_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_53d_goodG2BSink(char * data) fprintf ( stdout , data ); 