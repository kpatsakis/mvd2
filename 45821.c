static void goodG2B() twoIntsStruct * data ; structType myStruct ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) twoIntsStruct * data = myStruct . structFirst ; free ( data ); 