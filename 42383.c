void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_68b_badSink() wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_68_badData ; size_t i ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = L '\0' free ( data ); 