void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_42_bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); free ( data ); 