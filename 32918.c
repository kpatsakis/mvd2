static void goodG2B() wchar_t * data ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' goodG2BSink_b ( data ); void goodG2BSink_b(wchar_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(wchar_t * data) goodG2BSink_d ( data ); void goodG2BSink_d(wchar_t * data) size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 