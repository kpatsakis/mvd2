static void goodG2B1() size_t data ; data = 0; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = 20; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 