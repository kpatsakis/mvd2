void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68b_badSink() char * data = CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_68_badData ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 