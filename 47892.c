void CWE190_Integer_Overflow__int_fgets_add_34_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myUnion . unionFirst = data; int data = myUnion . unionSecond ; int result = data + 1 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 