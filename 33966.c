void CWE126_Buffer_Overread__char_declare_memmove_53_bad() char * data ; char dataBadBuffer [ 50 ] ; memset ( dataBadBuffer , 'A' , 50 - 1 ); dataBadBuffer [ 50 - 1 ] = '\0'; data = dataBadBuffer; CWE126_Buffer_Overread__char_declare_memmove_53b_badSink ( data ); void CWE126_Buffer_Overread__char_declare_memmove_53b_badSink(char * data) CWE126_Buffer_Overread__char_declare_memmove_53c_badSink ( data ); void CWE126_Buffer_Overread__char_declare_memmove_53c_badSink(char * data) CWE126_Buffer_Overread__char_declare_memmove_53d_badSink ( data ); void CWE126_Buffer_Overread__char_declare_memmove_53d_badSink(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 