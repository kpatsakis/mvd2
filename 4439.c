static void goodB2G() char * data ; data = NULL; CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G * goodB2GObject = new CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G ( data ) ; CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G::CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G(char * dataCopy) data = dataCopy; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); delete goodB2GObject CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G::~CWE690_NULL_Deref_From_Return__char_realloc_84_goodB2G() if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 