static void goodG2B() void * data ; data = NULL; data = ( void * ) CHAR_STRING; CWE121_Stack_Based_Buffer_Overflow__CWE135_63b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_63b_goodG2BSink(void * * dataPtr) void * data = * dataPtr ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 