void CWE758_Undefined_Behavior__int_malloc_use_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; int * pointer = ( int * ) malloc ( sizeof ( int ) ) ; int data = * pointer ; free ( pointer ); printIntLine ( data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 