void CWE427_Uncontrolled_Search_Path_Element__char_environment_63_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 250 - dataLen - 1 ); CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_badSink ( & data ); void CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_badSink(char * * dataPtr) char * data = * dataPtr ; PUTENV ( data ); 