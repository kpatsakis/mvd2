static void goodG2B() short data ; short dataArray [ 5 ] ; data = 0; data = 100 - 1; dataArray [ 2 ] = data; CWE194_Unexpected_Sign_Extension__listen_socket_memmove_66b_goodG2BSink ( dataArray ); void CWE194_Unexpected_Sign_Extension__listen_socket_memmove_66b_goodG2BSink(short dataArray[]) short data = dataArray [ 2 ] ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 