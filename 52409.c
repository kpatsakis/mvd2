void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_04_bad() int64_t * data ; int64_t * dataBadBuffer = ( int64_t * ) ALLOCA ( 50 * sizeof ( int64_t ) ) ; if ( STATIC_CONST_TRUE )  data = dataBadBuffer; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 