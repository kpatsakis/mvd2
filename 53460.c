static void good1() if ( globalFive != 5 )  charVoid * structCharVoid = ( charVoid * ) malloc ( sizeof ( charVoid ) ) ; structCharVoid -> voidSecond = ( void * ) SRC_STR; memcpy ( structCharVoid -> charFirst , SRC_STR , sizeof ( structCharVoid -> charFirst ) ); printWLine ( ( wchar_t * ) structCharVoid -> charFirst ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) printWLine ( ( wchar_t * ) structCharVoid -> voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( structCharVoid ); 