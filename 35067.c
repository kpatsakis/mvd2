int av_read_packet(AVFormatContext *s,AVPacket *pkt) return ff_read_packet ( s , pkt ) ; int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); pkt -> pts = wrap_timestamp ( st , pkt -> pts ); if ( ! pktl && st -> request_probe <= 0 )  s -> raw_packet_buffer_remaining_size -= pkt -> size; probe_codec ( s , st , pkt ); static void probe_codec(AVFormatContext *s,AVStream *st,const AVPacket *pkt) if ( st -> request_probe > 0 )  AVProbeData * pd = & st -> probe_data ; int end ; if ( pkt )  uint8_t * new_buf = ( av_realloc ( ( pd -> buf ) , ( pd -> buf_size + pkt -> size + 32 ) ) ) ; if ( ! new_buf )  pd -> buf = new_buf; memcpy ( ( pd -> buf + pd -> buf_size ) , ( pkt -> data ) , ( pkt -> size ) ); pd -> buf_size += pkt -> size; memset ( ( pd -> buf + pd -> buf_size ) , 0 , 32 ); st -> probe_packets = 0; end = s -> raw_packet_buffer_remaining_size <= 0 || st -> probe_packets <= 0; if ( end || ff_log2_c ( ( pd -> buf_size ) ) != ff_log2_c ( ( pd -> buf_size - pkt -> size ) ) )  int score = set_codec_from_probe_data ( s , st , pd ) ; static int set_codec_from_probe_data(AVFormatContext *s,AVStream *st,AVProbeData *pd) static const struct { const char * name ; enum AVCodecID id ; enum AVMediaType type ; } fmt_id_type [ ] = { { ( "aac" ) , ( AV_CODEC_ID_AAC ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "ac3" ) , ( AV_CODEC_ID_AC3 ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "dts" ) , ( AV_CODEC_ID_DTS ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "eac3" ) , ( AV_CODEC_ID_EAC3 ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "h264" ) , ( AV_CODEC_ID_H264 ) , ( AVMEDIA_TYPE_VIDEO ) } , { ( "loas" ) , ( AV_CODEC_ID_AAC_LATM ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "m4v" ) , ( AV_CODEC_ID_MPEG4 ) , ( AVMEDIA_TYPE_VIDEO ) } , { ( "mp3" ) , ( AV_CODEC_ID_MP3 ) , ( AVMEDIA_TYPE_AUDIO ) } , { ( "mpegvideo" ) , ( AV_CODEC_ID_MPEG2VIDEO ) , ( AVMEDIA_TYPE_VIDEO ) } , { ( 0 ) } } ; int score ; AVInputFormat * fmt = av_probe_input_format3 ( pd , 1 , & score ) ; if ( fmt && st -> request_probe <= score )  int i ; for (i = 0; fmt_id_type[i] . name; i++) if ( ! strcmp ( fmt -> name , fmt_id_type [ i ] . name ) )  