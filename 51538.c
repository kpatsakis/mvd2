static void goodB2G() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_realloc_64b_goodB2GSink ( & data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_64b_goodB2GSink(void * dataVoidPtr) int64_t * * dataPtr = ( int64_t * * ) dataVoidPtr ; int64_t * data = ( * dataPtr ) ; if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 