static void goodG2B1() size_t data ; data = 0; if ( GLOBAL_CONST_FIVE != 5 )  data = 20; if ( GLOBAL_CONST_FIVE == 5 )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 