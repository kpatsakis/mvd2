void bad() wchar_t * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = new wchar_t [ 10 ]; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 