void CWE401_Memory_Leak__malloc_realloc_wchar_t_06_bad() if ( STATIC_CONST_FIVE == 5 )  wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) data = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( data != NULL )  wcscpy ( data , L "New String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 