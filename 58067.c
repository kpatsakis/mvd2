static void goodG2B1() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = goodG2B1Source ( data ); static wchar_t * goodG2B1Source(wchar_t * data) if ( goodG2B1Static )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; free ( data ); 