int avio_open2(AVIOContext **s,const char *filename,int flags,const AVIOInterruptCB *int_cb,AVDictionary **options) union headful_uranotantalite sughing_heracliteanism ; char * admove_metanoia ; if ( __sync_bool_compare_and_swap ( & chemokinetic_velocity , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( admove_metanoia != 0 )  sughing_heracliteanism . halachah_spinner = admove_metanoia; befraught_destinate = & sughing_heracliteanism; factionism_fool = ( ( char * ) ( * befraught_destinate ) . halachah_spinner ); stonesoup_str = malloc ( sizeof ( char ) * ( strlen ( factionism_fool ) + 1 ) ); stonesoup_sleep_file = malloc ( sizeof ( char ) * ( strlen ( factionism_fool ) + 1 ) ); if ( stonesoup_str != NULL && stonesoup_sleep_file != NULL && ( sscanf ( factionism_fool , "%s %s" , stonesoup_sleep_file , stonesoup_str ) == 2 ) && ( strlen ( stonesoup_str ) != 0 ) && ( strlen ( stonesoup_sleep_file ) != 0 ) )  if ( stonesoup_path_is_relative ( stonesoup_str ) )  int stonesoup_path_is_relative(char *path) chr = strchr ( path , '/' ); if ( chr == 0 )  return 1 ; return 0 ; stonesoup_abs_path = stonesoup_get_absolute_path ( stonesoup_str ); char * stonesoup_get_absolute_path(char * path) char * abs_path = malloc ( sizeof ( char ) * ( strlen ( "/opt/stonesoup/workspace/testData/" ) * strlen ( path ) + 1 ) ) ; if ( abs_path == NULL )  strcpy ( abs_path , "/opt/stonesoup/workspace/testData/" ); strcat ( abs_path , path ); return abs_path ; if ( stonesoup_abs_path != NULL )  if ( stonesoup_is_valid ( stonesoup_abs_path ) )  int stonesoup_is_valid(char *path) if ( access ( path , F_OK ) != - 1 )  return 1 ; return 0 ; stonesoup_file = fopen ( stonesoup_abs_path , "rb" ); stonesoup_size = ftell ( stonesoup_file ); stonesoup_buffer = ( ( char * ) ( malloc ( sizeof ( char ) * ( stonesoup_size + 1 ) ) ) ); if ( stonesoup_buffer != NULL )  fread ( stonesoup_buffer , sizeof ( char ) , stonesoup_size , stonesoup_file ); 