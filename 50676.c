void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_63_bad() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_63b_badSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_63b_badSink(size_t * dataPtr) size_t data = * dataPtr ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 