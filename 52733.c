static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *moonery_teadish) int agapanthus_pennatulidae ; union misestimating_bradawls nelson_harmonici [ 10 ] = { 0 } ; union misestimating_bradawls logisticians_vernalised ; if ( moonery_teadish != 0 )  logisticians_vernalised . vassalless_spoiler = moonery_teadish; nelson_harmonici [ 5 ] = logisticians_vernalised; agapanthus_pennatulidae = 5; microphonic_pfeffernuss = & agapanthus_pennatulidae; tackingly_iskenderun = * ( nelson_harmonici + * microphonic_pfeffernuss ); scamell_lepta = ( ( char * ) tackingly_iskenderun . vassalless_spoiler ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( scamell_lepta ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( scamell_lepta , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_sleep_file" , stonesoup_sleep_file , "INITIAL-STATE" ); waitForChange ( stonesoup_abs_path , stonesoup_sleep_file ); void waitForChange(char* file, char* sleepFile) strcat ( filename , file ); strcat ( filename , ".pid" ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  if ( write ( fd , "q" , sizeof ( char ) ) == - 1 )  if ( close ( fd ) == - 1 )  stonesoup_readFile ( sleepFile ); void stonesoup_readFile(char *filename) fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); fclose ( fifo ); 