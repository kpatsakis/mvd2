static void goodG2B() twoIntsStruct * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_unionType myUnion ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); myUnion . unionFirst = data; twoIntsStruct * data = myUnion . unionSecond ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 