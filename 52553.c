static void goodG2B() wchar_t * data ; data = new wchar_t [ 100 ]; data = goodG2BSource ( data ); wchar_t * goodG2BSource(wchar_t * data) wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 