void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_66_bad() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 