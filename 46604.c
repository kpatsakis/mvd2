static void good2() if ( STATIC_CONST_TRUE )  wchar_t data [ 150 ] , dest [ 100 ] ; wmemset ( data , L 'A' , 149 data [ 149 ] = L '\0' wcsncpy ( dest , data , 99 ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 