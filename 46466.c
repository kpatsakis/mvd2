void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; SNPRINTF ( data , 100 , "%s" , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 