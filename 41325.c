static int gz_head(FILE_T state) if ( state -> avail_in == 0 )  if ( fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in == 0 )  if ( state -> next_in [ 0 ] == 31 )  state -> avail_in --; state -> next_in ++; if ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in && state -> next_in [ 0 ] == 139 )  guint8 cm ; guint8 flags ; state -> avail_in --; state -> next_in ++; if ( gz_next1 ( state , & cm ) == - 1 )  if ( cm != 8 )  state -> err = - 21; state -> err_info = "unknown compression method"; if ( gz_next1 ( state , & flags ) == - 1 )  static int gz_next1(FILE_T state,guint8 *ret) int ch ; ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); static int fill_in_buffer(FILE_T state) if ( state -> err )  if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  static int raw_read(FILE_T state,unsigned char *buf,unsigned int count,unsigned int *have) int ret ; * have = 0; ret = ( read ( state -> fd , ( buf + * have ) , ( count - * have ) ) ); if ( ret <= 0 )  * have += ret; state -> raw_pos += ret; while ( * have < count )  if ( ret < 0 )  state -> err = * __errno_location ( ); state -> err_info = ( ( void * ) 0 ); if ( ret == 0 )  