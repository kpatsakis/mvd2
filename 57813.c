static void goodB2G1() size_t data ; data = 0; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = rand ( ); if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 