static void goodG2B() twoIntsStruct * data ; data = NULL; data = goodG2BSource ( data ); static twoIntsStruct * goodG2BSource(twoIntsStruct * data) data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); return data ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 