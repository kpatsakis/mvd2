static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wcscpy ( data , BAD_SOURCE_FIXED_STRING ); baseObject -> action ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_82_goodB2G::action(wchar_t * data) for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 