void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataList . push_back ( data ); dataList . push_back ( data ); dataList . push_back ( data ); 