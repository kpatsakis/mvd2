static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *hypoergic_historiometric) if ( hypoergic_historiometric != 0 )  termly_varoom = ( ( int ) ( strlen ( hypoergic_historiometric ) ) ); gabbard_machin = ( ( char * ) ( malloc ( termly_varoom + 1 ) ) ); memset ( gabbard_machin , 0 , termly_varoom + 1 ); memcpy ( gabbard_machin , hypoergic_historiometric , termly_varoom ); invernacular_anoles [ * schroeder_misbelieving ] = gabbard_machin; circularism_monophagism = invernacular_anoles [ * schroeder_misbelieving ]; SMIRKISH_FURLOUGHS ( circularism_monophagism ); 