static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *ruru_sulphuretting) if ( ruru_sulphuretting != 0 )  essays_doubled = ruru_sulphuretting; sonnetlike_goossens ( 1 , essays_doubled ); void sonnetlike_goossens(int hardenability_roak,... ) struct stonesoup_data * stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ) ; curarization_visuals implete_magazine = 0 ; va_list modeling_nonvitality ; if ( hardenability_roak > 0 )  implete_magazine = ( va_arg ( modeling_nonvitality , curarization_visuals ) ); pseudopore_dana = ( ( char * ) implete_magazine ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( pseudopore_dana ) + 1 ) ); if ( stonesoupData -> data && ( sscanf ( pseudopore_dana , "%d %s" , & stonesoupData -> qsize , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & stonesoupData -> qsize , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INTIAL-STATE" ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->data_size" , stonesoupData -> data_size , & stonesoupData -> data_size , "INTIAL-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , replaceSymbols , ( void * ) stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toCaps , ( void * ) stonesoupData ) != 0 )  free ( stonesoupData -> data ); free ( stonesoupData ); 