void CWE78_OS_Command_Injection__char_environment_system_34_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; if ( SYSTEM ( data ) <= 0 )  