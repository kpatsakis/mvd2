void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_21_bad() int data ; data = - 1; data = badSource ( data ); static int badSource(int data) if ( badStatic )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); return data ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 