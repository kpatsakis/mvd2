void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType myStruct) char * data = myStruct . structFirst ; data [ i ] = source [ i ]; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 