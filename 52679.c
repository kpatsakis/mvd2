void bad() vector < int * > dataVector ; badSink ( dataVector ); void badSink(vector<int *> dataVector) int * data = dataVector [ 2 ] ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 