void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_54e_goodG2BSink(char * data) char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 