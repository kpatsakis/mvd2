void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_15_bad() char * data ; data = NULL; switch ( 6 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 