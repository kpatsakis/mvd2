static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_goodG2BSink(char * data) free ( data ); 