static void goodG2B() wchar_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_67_structType myStruct ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataGoodBuffer; data [ 0 ] = L '\0' myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 