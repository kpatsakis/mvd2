static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE369_Divide_by_Zero__int_fgets_divide_64b_goodB2GSink ( & data ); void CWE369_Divide_by_Zero__int_fgets_divide_64b_goodB2GSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; if ( data != 0 )  printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 