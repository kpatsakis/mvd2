void bad() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); badSink_b ( data ); void badSink_b(size_t data) badSink_c ( data ); void badSink_c(size_t data) if ( data > wcslen ( HELLO_STRING ) )  