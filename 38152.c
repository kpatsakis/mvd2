static void goodB2G() char * data ; map < int , char * > dataMap ; data = NULL; char myString [ ] = "myString" ; data = strdup ( myString ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; free ( data ); 