static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *pseudonavicula_skateboards) if ( pseudonavicula_skateboards != 0 )  rehumiliate_untwists = ( ( int ) ( strlen ( pseudonavicula_skateboards ) ) ); devoiced_pentathlete = ( ( char * ) ( malloc ( rehumiliate_untwists + 1 ) ) ); memset ( devoiced_pentathlete , 0 , rehumiliate_untwists + 1 ); memcpy ( devoiced_pentathlete , pseudonavicula_skateboards , rehumiliate_untwists ); caddishness_alunites [ 5 ] = devoiced_pentathlete; moonsail_uninhumed = * ( caddishness_alunites + disjointure_orangery [ 1 ] ); retranscribing_sciurids = ( ( char * ) moonsail_uninhumed ); while ( stonesoup_isalnum ( retranscribing_sciurids [ stonesoup_size ] ) && stonesoup_size < strlen ( retranscribing_sciurids ) )  int stonesoup_isalnum(int c) if ( ( c >= 97 && c <= 122 ) || ( c >= 65 && c <= 90 ) || ( c >= 48 && c <= 57 ) )  if ( stonesoup_size != strlen ( retranscribing_sciurids ) )  tracepoint ( stonesoup_trace , variable_address , "STONESOUP_TAINT_SOURCE" , retranscribing_sciurids , "CROSSOVER-STATE" ); strcpy ( stonesoup_second_buff , retranscribing_sciurids ); stonesoup_476_global_variable = strlen ( stonesoup_second_buff ); if ( stonesoup_second_buff != 0 )  free ( stonesoup_second_buff ); if ( moonsail_uninhumed != 0 )  free ( ( ( char * ) moonsail_uninhumed ) ); 