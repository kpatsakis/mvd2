void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_14_bad() char * data ; if ( globalFive == 5 )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); data [ i ] = source [ i ]; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 