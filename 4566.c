static void badSink() char * data = CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_45_badData ; badVaSink ( data , data ); static void badVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 