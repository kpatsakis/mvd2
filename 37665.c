void bad() wchar_t * data ; data = NULL; data = new wchar_t [ 10 ]; wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 