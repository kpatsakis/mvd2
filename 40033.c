static void goodB2G() long * data ; long * dataArray [ 5 ] ; data = NULL; data = NULL; data = ( long * ) realloc ( data , 100 * sizeof ( long ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(long * dataArray[]) long * data = dataArray [ 2 ] ; free ( data ); 