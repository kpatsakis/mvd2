void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; data = badSource ( data ); char * badSource(char * data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); return data ; 