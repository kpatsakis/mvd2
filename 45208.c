static void goodG2B() TwoIntsClass * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B * goodG2BObject = new CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B ( data ) ; CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B::CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B(TwoIntsClass * dataCopy) data = dataCopy; data = ( TwoIntsClass * ) malloc ( 100 * sizeof ( TwoIntsClass ) ); delete goodG2BObject CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B::~CWE762_Mismatched_Memory_Management_Routines__new_array_free_class_84_goodG2B() free ( data ); 