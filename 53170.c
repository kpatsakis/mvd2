unsigned int gzwfile_write(GZWFILE_T state,const void *buf,unsigned int len) unsigned int n ; z_streamp strm ; strm = & state -> strm; if ( state -> err != 0 )  if ( len == 0 )  if ( state -> size == 0 && gz_init ( state ) == - 1 )  static int gz_init(GZWFILE_T state) int ret ; z_streamp strm = & state -> strm ; state -> in = ( ( unsigned char * ) ( g_try_malloc ( ( state -> want ) ) ) ); state -> out = ( ( unsigned char * ) ( g_try_malloc ( ( state -> want ) ) ) ); if ( state -> in == ( ( void * ) 0 ) || state -> out == ( ( void * ) 0 ) )  return - 1 ; strm -> zalloc = 0; strm -> zfree = 0; strm -> opaque = 0; ret = deflateInit2_ ( strm , state -> level , 8 , 15 + 16 , 8 , state -> strategy , "1.2.8" , ( ( int ) ( sizeof ( z_stream ) ) ) ); if ( ret != 0 )  return - 1 ; return 0 ; if ( len < state -> size )  if ( strm -> avail_in == 0 )  strm -> next_in = state -> in; n = state -> size - strm -> avail_in; if ( n > len )  n = len; memcpy ( ( strm -> next_in + strm -> avail_in ) , buf , n ); strm -> avail_in += n; state -> pos += n; buf = ( ( ( char * ) buf ) + n ); len -= n; if ( len && gz_comp ( state , 0 ) == - 1 )  while ( len )  static int gz_comp(GZWFILE_T state,int flush) int ret ; int got ; unsigned int have ; z_streamp strm = & state -> strm ; if ( state -> size == 0 && gz_init ( state ) == - 1 )  static int gz_init(GZWFILE_T state) int ret ; z_streamp strm = & state -> strm ; state -> in = ( ( unsigned char * ) ( g_try_malloc ( ( state -> want ) ) ) ); state -> out = ( ( unsigned char * ) ( g_try_malloc ( ( state -> want ) ) ) ); if ( state -> in == ( ( void * ) 0 ) || state -> out == ( ( void * ) 0 ) )  return - 1 ; strm -> zalloc = 0; strm -> zfree = 0; strm -> opaque = 0; ret = deflateInit2_ ( strm , state -> level , 8 , 15 + 16 , 8 , state -> strategy , "1.2.8" , ( ( int ) ( sizeof ( z_stream ) ) ) ); if ( ret != 0 )  return - 1 ; return 0 ; ret = 0; if ( strm -> avail_out == 0 || flush != 0 && ( flush != 4 || ret == 1 ) )  have = ( ( unsigned int ) ( strm -> next_out - state -> next ) ); if ( have )  got = ( write ( state -> fd , ( state -> next ) , have ) ); if ( got < 0 )  if ( ( ( unsigned int ) got ) != have )  if ( strm -> avail_out == 0 )  strm -> avail_out = state -> size; strm -> next_out = state -> out; state -> next = strm -> next_out; have = strm -> avail_out; ret = deflate ( strm , flush ); if ( ret == - 2 )  have -= strm -> avail_out; while ( have )  