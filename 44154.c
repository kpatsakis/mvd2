static void goodB2G1() if ( STATIC_CONST_FIVE == 5 )  wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; data = ( void * ) dataBadBuffer; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 