FILE_T file_open(const char *path) int fd ; FILE_T ft ; if ( ( fd = open ( path , 0 | 0 , 0 ) ) == - 1 )  ft = file_fdopen ( fd ); FILE_T file_fdopen(int fd) struct stat st ; int want = 4096 ; FILE_T state ; if ( fd == - 1 )  return ( ( void * ) 0 ) ; state = ( ( FILE_T ) ( g_try_malloc ( sizeof ( ( * state ) ) ) ) ); if ( state == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; state -> fast_seek_cur = ( ( void * ) 0 ); state -> fast_seek = ( ( void * ) 0 ); state -> fd = fd; state -> is_compressed = 0; state -> start = lseek ( state -> fd , 0 , 1 ); if ( state -> start == ( - 1 ) )  state -> start = 0; state -> raw_pos = state -> start; if ( fstat ( fd , & st ) >= 0 )  want = st . st_blksize; state -> in = ( ( unsigned char * ) ( g_try_malloc ( want ) ) ); state -> out = ( ( unsigned char * ) ( g_try_malloc ( ( want << 1 ) ) ) ); state -> size = want; if ( state -> in == ( ( void * ) 0 ) || state -> out == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; state -> strm . zalloc = 0; state -> strm . zfree = 0; state -> strm . opaque = 0; state -> strm . avail_in = 0; state -> strm . next_in = 0; if ( inflateInit2_ ( & state -> strm , - 15 , "1.2.8" , ( ( int ) ( sizeof ( z_stream ) ) ) ) != 0 )  return ( ( void * ) 0 ) ; state -> dont_check_crc = 0; return state ; if ( ft == ( ( void * ) 0 ) )  close ( fd ); 