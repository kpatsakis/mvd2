static void goodG2B2() size_t data ; data = 0; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = 20; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 