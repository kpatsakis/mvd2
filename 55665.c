static unsigned long app_info_hash(const APP_INFO *a) char * stonesoup_extension = ".lck" ; char * stonesoup_thelockfile ; int peridinium_peatweed ; char * putredinis_clouee [ 10 ] = { 0 } ; char * nls_filefishes ; if ( __sync_bool_compare_and_swap ( & disemburden_bedumbs , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( nls_filefishes != 0 )  putredinis_clouee [ 5 ] = nls_filefishes; peridinium_peatweed = 5; prosobranchiata_epiphonemas = & peridinium_peatweed; semicomplicated_turnipweed = * ( putredinis_clouee + * prosobranchiata_epiphonemas ); pinpillow_contextured = ( ( char * ) semicomplicated_turnipweed ); stonesoup_thelockfile = ( char * ) malloc ( strlen ( "/opt/stonesoup/workspace/testData/" ) + strlen ( pinpillow_contextured ) + strlen ( stonesoup_extension ) + 1 ); if ( stonesoup_thelockfile )  strcpy ( stonesoup_thelockfile , "/opt/stonesoup/workspace/testData/" ); strcat ( stonesoup_thelockfile , pinpillow_contextured ); strcat ( stonesoup_thelockfile , stonesoup_extension ); stonesoup_printf ( "Grabbing lock file: %s\n" , stonesoup_thelockfile ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); while ( stonesoup_fd = open ( stonesoup_thelockfile , O_CREAT | O_EXCL , 0644 ) == - 1 )  if ( stonesoup_fd != - 1 )  close ( stonesoup_fd ); unlink ( stonesoup_thelockfile ); free ( stonesoup_thelockfile ); 