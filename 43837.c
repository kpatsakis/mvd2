static void goodB2G1() size_t data ; data = 0; goodB2G1Sink ( data ); static void goodB2G1Sink(size_t data) if ( goodB2G1Static )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 