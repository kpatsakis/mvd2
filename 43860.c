void CWE134_Uncontrolled_Format_String__char_file_fprintf_34_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; fprintf ( stdout , data ); 