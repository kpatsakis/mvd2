static void goodG2B() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; strcat ( data , NEW_PATH ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; PUTENV ( data ); 