static void goodG2B() int64_t * data ; int64_t dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_82_goodG2B::action(int64_t * data) int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 