static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *solus_kindred) if ( solus_kindred != 0 )  fistinut_unruffable = ( ( char * ) solus_kindred ); if ( strlen ( fistinut_unruffable ) > 0 && fistinut_unruffable [ 0 ] == '-' )  stonesoup_num_files = strtoul ( fistinut_unruffable , 0 , 16 ); if ( stonesoup_num_files > 0xffff )  stonesoup_filearray = ( ( FILE * * ) ( malloc ( stonesoup_num_files * sizeof ( FILE * ) ) ) ); if ( stonesoup_filearray != 0 )  for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) stonesoup_filearray [ stonesoup_i ] = 0; for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) snprintf ( stonesoup_filename , filename_len , "%s_%08x" , "/opt/stonesoup/workspace/testData/temp" , stonesoup_i ); stonesoup_filearray [ stonesoup_i ] = stonesoup_open_file ( stonesoup_filename ); FILE *stonesoup_open_file(char *filename_param) f = fopen ( filename_param , "w" ); if ( ! f )  return f ; if ( stonesoup_filearray [ stonesoup_i ] == 0 )  if ( stonesoup_i < stonesoup_num_files )  for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) if ( stonesoup_filearray [ stonesoup_i ] != 0 )  fclose ( stonesoup_filearray [ stonesoup_i ] ); free ( stonesoup_filearray ); if ( solus_kindred != 0 )  free ( ( ( char * ) solus_kindred ) ); 