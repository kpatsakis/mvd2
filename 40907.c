static void goodG2B() list < wchar_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; size_t i ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = L '\0' free ( data ); 