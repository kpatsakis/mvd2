void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_32_bad() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = * dataPtr2 ; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 