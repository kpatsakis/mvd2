static void goodG2B() wchar_t * data ; map < int , wchar_t * > dataMap ; data = NULL; data = new wchar_t [ 10 + 1 ]; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 