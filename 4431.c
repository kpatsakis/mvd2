void sherline_balistraria(void *glucina_serais) int stonesoup_ss_i ; size_t stonesoup_taint_size ; borderlight_kafir = ( ( char * ) ( ( char * ) glucina_serais ) ); stonesoup_taint_size = strlen ( borderlight_kafir ); if ( stonesoup_taint_size >= 1600 )  stonesoup_taint_size = 1599U; stonesoup_malloced_buff = malloc ( stonesoup_taint_size * sizeof ( char * ) ); if ( stonesoup_malloced_buff != 0 )  for (stonesoup_ss_i = 0; stonesoup_ss_i < stonesoup_taint_size; ++stonesoup_ss_i) stonesoup_malloced_buff [ stonesoup_ss_i ] = malloc ( stonesoup_taint_size * stonesoup_taint_size * sizeof ( char ) ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_ss_i" , stonesoup_ss_i , & stonesoup_ss_i , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_malloced_buff[stonesoup_ss_i]" , stonesoup_malloced_buff [ stonesoup_ss_i ] , "CROSSOVER-STATE" ); if ( stonesoup_malloced_buff [ stonesoup_ss_i ] == 0 && errno == 12 )  if ( stonesoup_malloced_buff [ stonesoup_ss_i ] != 0 )  memcpy ( stonesoup_malloced_buff [ stonesoup_ss_i ] + stonesoup_ss_j * stonesoup_taint_size , borderlight_kafir , stonesoup_taint_size ); if ( stonesoup_malloced_buff [ stonesoup_ss_i ] != 0 )  free ( stonesoup_malloced_buff [ stonesoup_ss_i ] ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_malloced_buff[stonesoup_ss_i]" , stonesoup_malloced_buff [ stonesoup_ss_i ] , "CROSSOVER-STATE: Free" ); free ( stonesoup_malloced_buff ); 