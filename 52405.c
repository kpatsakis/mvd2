static void goodG2B() long * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B * goodG2BObject = new CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B ( data ) ; CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B::CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B(long * dataCopy) data = dataCopy; data = ( long * ) malloc ( 100 * sizeof ( long ) ); delete goodG2BObject CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B::~CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_goodG2B() free ( data ); 