static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gradgrindian_retooled) struct byelaw_sellma lisbon_hematocyanin ; if ( gradgrindian_retooled != 0 )  lisbon_hematocyanin . forky_malakin = ( ( char * ) gradgrindian_retooled ); pitchpot_plumed = filmily_laches ( lisbon_hematocyanin ); struct byelaw_sellma filmily_laches(struct byelaw_sellma benzanthracene_sugarcoats) return benzanthracene_sugarcoats ; stentor_circumvascular ( pitchpot_plumed ); void stentor_circumvascular(struct byelaw_sellma tripodic_uranophane) int stonesoup_i ; char stonesoup_source [ 1024 ] ; guy_microchip = ( ( char * ) tripodic_uranophane . forky_malakin ); for (stonesoup_i = 0; stonesoup_i < 1024; stonesoup_i++) stonesoup_source [ stonesoup_i ] = 0; strncpy ( stonesoup_source , guy_microchip , sizeof ( stonesoup_source ) ); stonesoup_source [ 1023 ] = '\0'; if ( strlen ( stonesoup_source ) + 1 <= 64 )  tracepoint ( stonesoup_trace , variable_buffer_info , "stonesoup_source" , strlen ( stonesoup_source ) + 1 , stonesoup_source , "TRIGGER-STATE" ); 