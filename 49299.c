void bad() size_t data ; size_t dataArray [ 5 ] ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 