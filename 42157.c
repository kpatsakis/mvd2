static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *banque_malfed) if ( banque_malfed != 0 )  procambium_copetitioner = ( ( int ) ( strlen ( banque_malfed ) ) ); klendusic_feeze = ( ( char * ) ( malloc ( procambium_copetitioner + 1 ) ) ); memset ( klendusic_feeze , 0 , procambium_copetitioner + 1 ); memcpy ( klendusic_feeze , banque_malfed , procambium_copetitioner ); routously_tertium = & klendusic_feeze; elelments_thecal = ( ( char * * ) ( ( ( unsigned long ) routously_tertium ) * nonejecting_kankan * nonejecting_kankan ) ) + 5; if ( * ( elelments_thecal - 5 ) != 0 )  afterrake_acropodium = ( ( char * ) ( * ( elelments_thecal - 5 ) ) ); stonesoup_pFile = fopen ( afterrake_acropodium , "r" ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_pFile" , stonesoup_pFile , "TRIGGER-STATE" ); fgets ( stonesoup_buffer , 79 , stonesoup_pFile ); stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fclose ( stonesoup_pFile ); if ( * ( elelments_thecal - 5 ) != 0 )  free ( ( ( char * ) ( * ( elelments_thecal - 5 ) ) ) ); 