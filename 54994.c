void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_63_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 