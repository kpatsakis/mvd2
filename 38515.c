int av_copy_packet(AVPacket *dst,AVPacket *src) * dst = * src; return copy_packet_data ( dst , src ) ; static int copy_packet_data(AVPacket *dst,AVPacket *src) dst -> data = ( ( void * ) 0 ); dst -> side_data = ( ( void * ) 0 ); void * data ; if ( 1 )  if ( ( ( unsigned int ) ( dst -> size ) ) > ( ( unsigned int ) ( dst -> size ) ) + 16 )  data = av_malloc ( ( dst -> size + 16 ) ); data = av_malloc ( ( dst -> size ) ); if ( ! data )  memcpy ( data , ( src -> data ) , ( dst -> size ) ); dst -> data = data; while ( 0 )  dst -> destruct = av_destruct_packet; if ( dst -> side_data_elems )  int i ; void * data ; if ( 0 )  if ( ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) > ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) + 16 )  data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) + 16 ); data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); if ( ! data )  memcpy ( data , ( src -> side_data ) , ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); if ( 0 )  memset ( ( ( ( uint8_t * ) data ) + ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) , 0 , 16 ); dst -> side_data = data; while ( 0 )  memset ( ( dst -> side_data ) , 0 , ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); for (i = 0; i < dst -> side_data_elems; i++) void * data ; if ( 1 )  if ( ( ( unsigned int ) src -> side_data [ i ] . size ) > ( ( unsigned int ) src -> side_data [ i ] . size ) + 16 )  data = av_malloc ( ( src -> side_data [ i ] . size + 16 ) ); data = av_malloc ( src -> side_data [ i ] . size ); if ( ! data )  memcpy ( data , src -> side_data [ i ] . data , src -> side_data [ i ] . size ); if ( 1 )  memset ( ( ( ( uint8_t * ) data ) + src -> side_data [ i ] . size ) , 0 , 16 ); dst -> side_data [ i ] . data = data; while ( 0 )  dst -> side_data [ i ] . size = src -> side_data [ i ] . size; dst -> side_data [ i ] . type = src -> side_data [ i ] . type; 