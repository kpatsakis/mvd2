static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *anankes_pouring) struct stonesoup_data * dataStruct = malloc ( sizeof ( struct stonesoup_data ) ) ; long laliophobia_figurers [ 10 ] ; char * walksman_bibs [ 10 ] = { 0 } ; if ( anankes_pouring != 0 )  walksman_bibs [ 5 ] = anankes_pouring; laliophobia_figurers [ 1 ] = 5; seidlitz_solecists = * ( walksman_bibs + laliophobia_figurers [ 1 ] ); moaning_throw = ( ( char * ) seidlitz_solecists ); if ( dataStruct )  dataStruct -> inc_amount = 1; dataStruct -> data = malloc ( sizeof ( char ) * ( strlen ( moaning_throw ) + 1 ) ); dataStruct -> file1 = malloc ( sizeof ( char ) * ( strlen ( moaning_throw ) + 1 ) ); dataStruct -> file2 = malloc ( sizeof ( char ) * ( strlen ( moaning_throw ) + 1 ) ); if ( dataStruct -> data )  free ( dataStruct -> data ); 