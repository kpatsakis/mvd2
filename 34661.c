static void goodG2B() char * data ; data = NULL; CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B * goodG2BObject = new CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B ( data ) ; CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B::CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B(char * dataCopy) data = dataCopy; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; delete goodG2BObject CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B::~CWE127_Buffer_Underread__malloc_char_ncpy_84_goodG2B() char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; strncpy ( dest , data , strlen ( dest ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 