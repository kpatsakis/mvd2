void CWE690_NULL_Deref_From_Return__wchar_t_malloc_12_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wcscpy ( data , L "Initialize" ) if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 