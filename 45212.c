static void goodG2B() short data ; data = 0; data = 100 - 1; CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_82_base * baseObject = new CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_82_goodG2B baseObject -> action ( data ); void CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_82_goodG2B::action(short data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 