static void goodG2B() wchar_t * data ; wchar_t dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 