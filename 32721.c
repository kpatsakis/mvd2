void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_11_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; strcpy ( dest , data ); 