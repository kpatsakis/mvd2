static void goodG2B2() wchar_t * data ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; if ( globalTrue )  data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 