static void goodG2B() list < wchar_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 