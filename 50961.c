static void goodG2B() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_goodG2BSink(twoIntsStruct * data) data [ i ] = source [ i ]; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 