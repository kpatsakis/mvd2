static void goodG2B() list < wchar_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 