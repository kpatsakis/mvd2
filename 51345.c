void CWE194_Unexpected_Sign_Extension__negative_strncpy_06_bad() short data ; data = 0; if ( STATIC_CONST_FIVE == 5 )  data = - 1; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 