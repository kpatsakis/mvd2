static void goodG2B1() wchar_t * data ; if ( STATIC_CONST_FIVE != 5 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 