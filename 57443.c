void bad() list < wchar_t * > dataList ; badSink ( dataList ); void badSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' free ( data ); 