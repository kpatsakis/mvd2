static void goodB2G() char * data ; CWE401_Memory_Leak__char_calloc_67_structType myStruct ; data = NULL; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); myStruct . structFirst = data; CWE401_Memory_Leak__char_calloc_67b_goodB2GSink ( myStruct ); void CWE401_Memory_Leak__char_calloc_67b_goodB2GSink(CWE401_Memory_Leak__char_calloc_67_structType myStruct) char * data = myStruct . structFirst ; free ( data ); 