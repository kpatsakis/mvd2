static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *locky_lamellary) struct shoogle_dryfoos jerkingly_scribal ; if ( locky_lamellary != 0 )  jerkingly_scribal . preterequine_semimagically = ( ( char * ) locky_lamellary ); reinstruction_noose = & jerkingly_scribal; blusht_foggiest = reinstruction_noose + 5; if ( ( * ( blusht_foggiest - 5 ) ) . preterequine_semimagically != 0 )  free ( ( ( char * ) ( * ( blusht_foggiest - 5 ) ) . preterequine_semimagically ) ); 