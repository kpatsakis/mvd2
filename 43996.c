void bad() TwoIntsClass * data ; map < int , TwoIntsClass * > dataMap ; data = NULL; data = new TwoIntsClass dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, TwoIntsClass *> dataMap) TwoIntsClass * data = dataMap [ 2 ] ; free ( data ); 