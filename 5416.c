static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *triplopy_mollycoddle) if ( triplopy_mollycoddle != 0 )  airmailed_hyperploid [ 22 ] = triplopy_mollycoddle; atelomyelia_snecket ( 1 , airmailed_hyperploid ); void atelomyelia_snecket(int mesophyllic_caneton,... ) if ( mesophyllic_caneton > 0 )  __builtin_va_start ( noninhibitory_aplanatism , mesophyllic_caneton ); 