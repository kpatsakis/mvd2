static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_61b_goodG2BSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_61b_goodG2BSource(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 