void CWE758_Undefined_Behavior__struct_malloc_use_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; twoIntsStruct * pointer = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ) ; twoIntsStruct data = * pointer ; free ( pointer ); printIntLine ( data . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data . intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 