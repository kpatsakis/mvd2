void CWE190_Integer_Overflow__int_fgets_square_41_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); badSink ( data ); static void badSink(int data) int result = data * data ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 