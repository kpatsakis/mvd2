static void goodG2B() int h ; wchar_t * data ; data = NULL; for(h = 0; h < 1; h++) data = new wchar_t [ 10 + 1 ]; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 