static int gif_encode_frame(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) int ret ; if ( ( ret = ff_alloc_packet2 ( avctx , pkt , avctx -> width * avctx -> height * 7 / 5 + AV_INPUT_BUFFER_MIN_SIZE , 0 ) ) < 0 )  if ( avctx -> pix_fmt == AV_PIX_FMT_PAL8 )  uint8_t * pal_exdata = av_packet_new_side_data ( pkt , AV_PKT_DATA_PALETTE , AVPALETTE_SIZE ) ; if ( ! pal_exdata )  memcpy ( pal_exdata , pict -> data [ 1 ] , AVPALETTE_SIZE ); s -> pal_exdata = pal_exdata; if ( ! s -> palette_loaded )  memcpy ( s -> palette , palette , AVPALETTE_SIZE ); s -> transparent_index = get_palette_transparency_index ( palette ); static int get_palette_transparency_index(const uint32_t *palette) if ( ! palette )  const uint32_t v = palette [ i ] ; if ( v >> 24 < smallest_alpha )  smallest_alpha = v >> 24; return smallest_alpha < 128 ? transparent_color_index : - 1 ; s -> palette_loaded = 1; if ( ! memcmp ( s -> palette , palette , AVPALETTE_SIZE ) )  if ( ! s -> last_frame )  s -> last_frame = av_frame_alloc ( ); if ( ! s -> last_frame )  av_frame_unref ( s -> last_frame ); ret = av_frame_ref ( s -> last_frame , ( AVFrame * ) pict ); if ( ret < 0 )  return ret ; 