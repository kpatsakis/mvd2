static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *cholesteric_ripstop) if ( cholesteric_ripstop != 0 )  knouting_odovacar = ( ( char * ) cholesteric_ripstop ); stonesoup_file_desc = open ( knouting_odovacar , 0 ); if ( stonesoup_file_desc > - 1 )  read ( stonesoup_file_desc , stonesoup_input_buf , stonesoup_MAXLEN ); close ( stonesoup_file_desc ); if ( cholesteric_ripstop != 0 )  free ( ( ( char * ) cholesteric_ripstop ) ); 