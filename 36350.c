void initlinedraw(int flag) size_t stonesoup_taint_size ; char * monaca_orkey ; if ( __sync_bool_compare_and_swap ( & breaks_suitings , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( monaca_orkey != 0 )  universally_dill = ( ( char * ) monaca_orkey ); stonesoup_taint_size = strlen ( universally_dill ); if ( stonesoup_taint_size >= 1600 )  stonesoup_taint_size = 1599U; stonesoup_malloced_buff = malloc ( stonesoup_taint_size * sizeof ( char * ) ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_malloced_buff" , stonesoup_malloced_buff , "INTIAL-STATE" ); if ( stonesoup_malloced_buff != 0 )  stonesoup_malloced_buff [ stonesoup_ss_i ] = malloc ( stonesoup_taint_size * stonesoup_taint_size * sizeof ( char ) ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_ss_i" , stonesoup_ss_i , & stonesoup_ss_i , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_malloced_buff[stonesoup_ss_i]" , stonesoup_malloced_buff [ stonesoup_ss_i ] , "CROSSOVER-STATE" ); if ( stonesoup_malloced_buff [ stonesoup_ss_i ] == 0 && errno == 12 )  if ( stonesoup_malloced_buff [ stonesoup_ss_i ] != 0 )  memcpy ( stonesoup_malloced_buff [ stonesoup_ss_i ] + stonesoup_ss_j * stonesoup_taint_size , universally_dill , stonesoup_taint_size ); if ( stonesoup_malloced_buff [ stonesoup_ss_i ] != 0 )  free ( stonesoup_malloced_buff [ stonesoup_ss_i ] ); tracepoint ( stonesoup_trace , variable_address , "stonesoup_malloced_buff[stonesoup_ss_i]" , stonesoup_malloced_buff [ stonesoup_ss_i ] , "CROSSOVER-STATE: Free" ); free ( stonesoup_malloced_buff ); 