void bad() char * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad(char * dataCopy) data = dataCopy; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_84_bad() char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 