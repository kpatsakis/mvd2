void bad() char * data ; map < int , char * > dataMap ; data = NULL; data = new char [ 100 ]; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; free ( data ); 