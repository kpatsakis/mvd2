static void goodG2B1() wchar_t * data ; data = NULL; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); free ( data ); 