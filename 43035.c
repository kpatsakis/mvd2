static void goodG2B() wchar_t * data ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataGoodBuffer; CWE126_Buffer_Overread__wchar_t_alloca_memmove_51b_goodG2BSink ( data ); void CWE126_Buffer_Overread__wchar_t_alloca_memmove_51b_goodG2BSink(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 