void CWE690_NULL_Deref_From_Return__wchar_t_malloc_63_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); CWE690_NULL_Deref_From_Return__wchar_t_malloc_63b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__wchar_t_malloc_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 