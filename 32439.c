void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_01_bad() twoIntsStruct * data ; twoIntsStruct * dataBadBuffer = ( twoIntsStruct * ) ALLOCA ( 50 * sizeof ( twoIntsStruct ) ) ; data = dataBadBuffer; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 