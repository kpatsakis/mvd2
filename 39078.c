static void goodB2G() int64_t * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G(int64_t * dataCopy) data = dataCopy; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_array_int64_t_realloc_84_goodB2G() free ( data ); 