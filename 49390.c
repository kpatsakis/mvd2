void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_61_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_61b_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_61b_badSource(char * data) data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); free ( data ); 