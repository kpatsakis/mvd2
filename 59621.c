void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_05_bad() char * data ; data = NULL; if ( staticTrue )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); free ( data ); 