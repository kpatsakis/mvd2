static void goodG2B1() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Source(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Global )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; free ( data ); 