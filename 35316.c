static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *rhinthonica_unpropitiating) if ( rhinthonica_unpropitiating != 0 )  stonesoup_input_string = ( signed char * ) getenv ( "INPUT_STRING" ); tracepoint ( stonesoup_trace , variable_buffer , "((char *)stonesoup_input_string)" , ( ( char * ) stonesoup_input_string ) , "INITIAL-STATE" ); if ( stonesoup_input_string != 0 )  for (stonesoup_ss_i = 0; stonesoup_ss_i < strlen((char *)stonesoup_input_string); ++stonesoup_ss_i) if ( stonesoup_input_string [ stonesoup_ss_i ] < 0 )  ++ stonesoup_stack_buff [ stonesoup_input_string [ stonesoup_ss_i ] ]; 