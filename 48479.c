static void goodB2G() int64_t * data ; CWE690_NULL_Deref_From_Return__int64_t_malloc_34_unionType myUnion ; data = NULL; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 