void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); baseObject -> action ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_82_bad::action(char * data) for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 