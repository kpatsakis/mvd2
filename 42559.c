void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54b_badSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54c_badSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54d_badSink(int data) CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_54e_badSink(int data) if ( data >= 0 )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( buffer ); 