static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gipsy_thaneland) int supersensitize_nidhug = 7 ; union overtartness_rowable danford_horsefish ; if ( gipsy_thaneland != 0 )  danford_horsefish . vagally_dowelled = gipsy_thaneland; zubkoff_propylon = & danford_horsefish; orly_prorump ( supersensitize_nidhug , zubkoff_propylon ); void orly_prorump(int hemophilia_ardella,union overtartness_rowable *carafon_slum) struct stonesoup_data * stonesoupData ; hemophilia_ardella --; if ( hemophilia_ardella > 0 )  statistology_sitient = ( ( char * ) ( * carafon_slum ) . vagally_dowelled ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( statistology_sitient ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( statistology_sitient ) + 1 ) ); if ( ( sscanf ( statistology_sitient , "%d %s %s %d" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , & ( stonesoupData -> data ) ) == 4 ) && stonesoupData -> qsize >= 0 && stonesoupData -> data >= 0 && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  