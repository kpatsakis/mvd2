void engirdling_poignado(char **insanitariness_riving) char stonesoup_base_cmd [ 1000 ] ; snprintf ( stonesoup_base_cmd , 1000 , "find %s -iname " , "/opt/stonesoup/workspace/testData/temp" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_base_cmd" , stonesoup_base_cmd , "INITIAL STATE" ); snprintf ( stonesoup_cmd_string , 1000 , "%s%s" , stonesoup_base_cmd , navagium_uncensorable ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_cmd_string" , stonesoup_cmd_string , "CROSSOVER-STATE" ); stonesoup_fpipe = popen ( stonesoup_cmd_string , "r" ); if ( stonesoup_fpipe != 0 )  while ( fgets ( stonesoup_buffer , 100 , stonesoup_fpipe ) != 0 )  stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); pclose ( stonesoup_fpipe ); 