static void goodG2B1() wchar_t * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 