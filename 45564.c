static void goodB2G() int i , k ; for(i = 0; i < 1; i++) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); if ( data > 0 )  if ( data < ( INT_MAX / 2 ) )  int result = data * 2 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 