static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); free ( data ); 