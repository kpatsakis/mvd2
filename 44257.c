static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_51b_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_51b_goodB2GSink(char * data) for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 