static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = goodG2BSource ( data ); static wchar_t * goodG2BSource(wchar_t * data) wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 