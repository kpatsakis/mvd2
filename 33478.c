static void goodB2G2() void * data ; data = NULL; if ( globalFive == 5 )  data = ( void * ) WIDE_STRING; if ( globalFive == 5 )  size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 