static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *mullens_flyers) if ( mullens_flyers != 0 )  stoppers_dhobie = ( ( char * ) mullens_flyers ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( stoppers_dhobie ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( stoppers_dhobie ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 )  if ( ( sscanf ( stoppers_dhobie , "%s %s" , stonesoupData -> file1 , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData -> data ); 