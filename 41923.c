void bad() wchar_t * data ; map < int , wchar_t * > dataMap ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 