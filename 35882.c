static int jpeg2000_decode_frame(AVCodecContext *avctx, void int *got_frame, AVPacket *avpkt) Jpeg2000DecoderContext * s = avctx -> priv_data ; int tileno , ret ; s -> avctx = avctx; s -> curtileno = - 1; memset ( s -> cdef , - 1 , sizeof ( s -> cdef ) ); if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  if ( bytestream2_get_bytes_left ( & s -> g ) >= 12 && ( bytestream2_get_be32u ( & s -> g ) == 12 ) && ( bytestream2_get_be32u ( & s -> g ) == JP2_SIG_TYPE ) && ( bytestream2_get_be32u ( & s -> g ) == JP2_SIG_VALUE ) )  if ( ! jp2_find_codestream ( s ) )  static int jp2_find_codestream(Jpeg2000DecoderContext *s) uint32_t atom_size , atom , atom_end ; int search_range = 10 ; while ( search_range && bytestream2_get_bytes_left ( & s -> g ) >= 8 )  atom_size = bytestream2_get_be32u ( & s -> g ); atom = bytestream2_get_be32u ( & s -> g ); atom_end = bytestream2_tell ( & s -> g ) + atom_size - 8; if ( atom == JP2_CODESTREAM )  return 1 ; if ( bytestream2_get_bytes_left ( & s -> g ) < atom_size || atom_end < atom_size )  return 0 ; if ( atom == JP2_HEADER && atom_size >= 16 )  uint32_t atom2_size , atom2 , atom2_end ; atom2_size = bytestream2_get_be32u ( & s -> g ); atom2 = bytestream2_get_be32u ( & s -> g ); atom2_end = bytestream2_tell ( & s -> g ) + atom2_size - 8; if ( atom2_size < 8 || atom2_end > atom_end || atom2_end < atom2_size )  if ( atom2 == JP2_CODESTREAM )  return 1 ; while ( atom_end - atom2_end >= 8 )  search_range --; return 0 ; if ( bytestream2_get_be16u ( & s -> g ) != JPEG2000_SOC )  if ( ret = jpeg2000_read_main_headers ( s ) )  static int jpeg2000_read_main_headers(Jpeg2000DecoderContext *s) Jpeg2000CodingStyle * codsty = s -> codsty ; Jpeg2000QuantStyle * qntsty = s -> qntsty ; Jpeg2000POC * poc = & s -> poc ; uint8_t * properties = s -> properties ; int len , ret = 0 ; uint16_t marker ; int oldpos ; if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  marker = bytestream2_get_be16u ( & s -> g ); oldpos = bytestream2_tell ( & s -> g ); if ( marker == JPEG2000_SOD )  Jpeg2000Tile * tile ; Jpeg2000TilePart * tp ; if ( ! s -> tile )  if ( s -> curtileno < 0 )  tile = s -> tile + s -> curtileno; tp = tile -> tile_part + tile -> tp_idx; if ( tp -> tp_end < s -> g . buffer )  if ( marker == JPEG2000_EOC )  len = bytestream2_get_be16 ( & s -> g ); if ( len < 2 || bytestream2_get_bytes_left ( & s -> g ) < len - 2 )  switch ( marker )  ret = get_siz ( s ); static int get_siz(Jpeg2000DecoderContext *s) int i ; int ncomponents ; uint32_t log2_chroma_wh = 0 ; if ( bytestream2_get_bytes_left ( & s -> g ) < 36 )  return AVERROR_INVALIDDATA ; s -> avctx -> profile = bytestream2_get_be16u ( & s -> g ); s -> width = bytestream2_get_be32u ( & s -> g ); s -> height = bytestream2_get_be32u ( & s -> g ); s -> image_offset_x = bytestream2_get_be32u ( & s -> g ); s -> image_offset_y = bytestream2_get_be32u ( & s -> g ); s -> tile_width = bytestream2_get_be32u ( & s -> g ); s -> tile_height = bytestream2_get_be32u ( & s -> g ); s -> tile_offset_x = bytestream2_get_be32u ( & s -> g ); s -> tile_offset_y = bytestream2_get_be32u ( & s -> g ); ncomponents = bytestream2_get_be16u ( & s -> g ); if ( s -> image_offset_x || s -> image_offset_y )  return AVERROR_PATCHWELCOME ; if ( ncomponents <= 0 )  return AVERROR_INVALIDDATA ; if ( ncomponents > 4 )  return AVERROR_PATCHWELCOME ; s -> ncomponents = ncomponents; if ( s -> tile_width <= 0 || s -> tile_height <= 0 )  return AVERROR_INVALIDDATA ; if ( bytestream2_get_bytes_left ( & s -> g ) < 3 * s -> ncomponents )  return AVERROR_INVALIDDATA ; for (i = 0; i < s->ncomponents; i++) uint8_t x = bytestream2_get_byteu ( & s -> g ) ; s -> cbps [ i ] = ( x & 0x7f ) + 1; s -> precision = FFMAX ( s -> cbps [ i ] , s -> precision ); s -> sgnd [ i ] = ! ! ( x & 0x80 ); s -> cdx [ i ] = bytestream2_get_byteu ( & s -> g ); s -> cdy [ i ] = bytestream2_get_byteu ( & s -> g ); if ( ! s -> cdx [ i ] || s -> cdx [ i ] == 3 || s -> cdx [ i ] > 4 || ! s -> cdy [ i ] || s -> cdy [ i ] == 3 || s -> cdy [ i ] > 4 )  return AVERROR_INVALIDDATA ; log2_chroma_wh |= s -> cdy [ i ] >> 1 << i * 4 | s -> cdx [ i ] >> 1 << i * 4 + 2; s -> numXtiles = ff_jpeg2000_ceildiv ( s -> width - s -> tile_offset_x , s -> tile_width ); s -> numYtiles = ff_jpeg2000_ceildiv ( s -> height - s -> tile_offset_y , s -> tile_height ); if ( s -> numXtiles * ( uint64_t ) s -> numYtiles > INT_MAX / sizeof ( * s -> tile ) )  return AVERROR ( EINVAL ) ; s -> tile = av_mallocz_array ( s -> numXtiles * s -> numYtiles , sizeof ( * s -> tile ) ); if ( ! s -> tile )  return AVERROR ( ENOMEM ) ; for (i = 0; i < s->numXtiles * s->numYtiles; i++) Jpeg2000Tile * tile = s -> tile + i ; tile -> comp = av_mallocz ( s -> ncomponents * sizeof ( * tile -> comp ) ); if ( ! tile -> comp )  return AVERROR ( ENOMEM ) ; s -> avctx -> width = ff_jpeg2000_ceildivpow2 ( s -> width - s -> image_offset_x , s -> reduction_factor ); s -> avctx -> height = ff_jpeg2000_ceildivpow2 ( s -> height - s -> image_offset_y , s -> reduction_factor ); if ( s -> avctx -> profile == FF_PROFILE_JPEG2000_DCINEMA_2K || s -> avctx -> profile == FF_PROFILE_JPEG2000_DCINEMA_4K )  possible_fmts = xyz_pix_fmts; possible_fmts_nb = FF_ARRAY_ELEMS ( xyz_pix_fmts ); switch ( s -> colour_space )  possible_fmts = rgb_pix_fmts; possible_fmts_nb = FF_ARRAY_ELEMS ( rgb_pix_fmts ); possible_fmts = gray_pix_fmts; possible_fmts_nb = FF_ARRAY_ELEMS ( gray_pix_fmts ); possible_fmts = yuv_pix_fmts; possible_fmts_nb = FF_ARRAY_ELEMS ( yuv_pix_fmts ); possible_fmts = all_pix_fmts; possible_fmts_nb = FF_ARRAY_ELEMS ( all_pix_fmts ); for (i = 0; i < possible_fmts_nb; ++i) if ( pix_fmt_match ( possible_fmts [ i ] , ncomponents , s -> precision , log2_chroma_wh , s -> pal8 ) )  static int pix_fmt_match(enum AVPixelFormat pix_fmt, int int bpc, uint32_t log2_chroma_wh, int pal8) int match = 1 ; const AVPixFmtDescriptor * desc = av_pix_fmt_desc_get ( pix_fmt ) ; if ( desc -> nb_components != components )  return 0 ; switch ( components )  match = match && desc -> comp [ 3 ] . depth_minus1 + 1 >= bpc && ( log2_chroma_wh >> 14 & 3 ) == 0 && ( log2_chroma_wh >> 12 & 3 ) == 0; match = match && desc -> comp [ 2 ] . depth_minus1 + 1 >= bpc && ( log2_chroma_wh >> 10 & 3 ) == desc -> log2_chroma_w && ( log2_chroma_wh >> 8 & 3 ) == desc -> log2_chroma_h; match = match && desc -> comp [ 1 ] . depth_minus1 + 1 >= bpc && ( log2_chroma_wh >> 6 & 3 ) == desc -> log2_chroma_w && ( log2_chroma_wh >> 4 & 3 ) == desc -> log2_chroma_h; match = match && desc -> comp [ 0 ] . depth_minus1 + 1 >= bpc && ( log2_chroma_wh >> 2 & 3 ) == 0 && ( log2_chroma_wh & 3 ) == 0 && ( desc -> flags & AV_PIX_FMT_FLAG_PAL ) == pal8 * AV_PIX_FMT_FLAG_PAL; return match ; s -> avctx -> pix_fmt = possible_fmts [ i ]; if ( i == possible_fmts_nb )  if ( ncomponents == 4 && s -> cdy [ 0 ] == 1 && s -> cdx [ 0 ] == 1 && s -> cdy [ 1 ] == 1 && s -> cdx [ 1 ] == 1 && s -> cdy [ 2 ] == s -> cdy [ 3 ] && s -> cdx [ 2 ] == s -> cdx [ 3 ] )  if ( s -> precision == 8 && s -> cdy [ 2 ] == 2 && s -> cdx [ 2 ] == 2 && ! s -> pal8 )  i = 0; if ( i == possible_fmts_nb )  return AVERROR_PATCHWELCOME ; return 0 ; if ( ! s -> tile )  s -> numXtiles = s -> numYtiles = 0; ret = get_coc ( s , codsty , properties ); static int get_coc(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle uint8_t *properties) int compno , ret ; if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  return AVERROR_INVALIDDATA ; compno = bytestream2_get_byteu ( & s -> g ); if ( compno >= s -> ncomponents )  return AVERROR_INVALIDDATA ; c += compno; c -> csty = bytestream2_get_byteu ( & s -> g ); if ( ( ret = get_cox ( s , c ) ) < 0 )  static int get_cox(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *c) uint8_t byte ; if ( bytestream2_get_bytes_left ( & s -> g ) < 5 )  return AVERROR_INVALIDDATA ; c -> nreslevels = bytestream2_get_byteu ( & s -> g ) + 1; if ( c -> nreslevels >= JPEG2000_MAX_RESLEVELS )  return AVERROR_INVALIDDATA ; if ( c -> nreslevels <= s -> reduction_factor )  return AVERROR ( EINVAL ) ; c -> nreslevels2decode = c -> nreslevels - s -> reduction_factor; c -> log2_cblk_width = ( bytestream2_get_byteu ( & s -> g ) & 15 ) + 2; c -> log2_cblk_height = ( bytestream2_get_byteu ( & s -> g ) & 15 ) + 2; if ( c -> log2_cblk_width > 10 || c -> log2_cblk_height > 10 || c -> log2_cblk_width + c -> log2_cblk_height > 12 )  return AVERROR_INVALIDDATA ; c -> cblk_style = bytestream2_get_byteu ( & s -> g ); c -> transform = bytestream2_get_byteu ( & s -> g ); if ( ( s -> avctx -> flags & AV_CODEC_FLAG_BITEXACT ) && ( c -> transform == FF_DWT97 ) )  c -> transform = FF_DWT97_INT; if ( c -> transform == FF_DWT53 )  s -> avctx -> properties |= FF_CODEC_PROPERTY_LOSSLESS; if ( c -> csty & JPEG2000_CSTY_PREC )  int i ; for (i = 0; i < c->nreslevels; i++) byte = bytestream2_get_byte ( & s -> g ); c -> log2_prec_widths [ i ] = byte & 0x0F; c -> log2_prec_heights [ i ] = ( byte >> 4 ) & 0x0F; if ( i )  if ( c -> log2_prec_widths [ i ] == 0 || c -> log2_prec_heights [ i ] == 0 )  return AVERROR_INVALIDDATA ; return 0 ; return ret ; return 0 ; ret = get_cod ( s , codsty , properties ); static int get_cod(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle uint8_t *properties) Jpeg2000CodingStyle tmp ; int compno , ret ; if ( bytestream2_get_bytes_left ( & s -> g ) < 5 )  return AVERROR_INVALIDDATA ; tmp . csty = bytestream2_get_byteu ( & s -> g ); tmp . prog_order = bytestream2_get_byteu ( & s -> g ); tmp . nlayers = bytestream2_get_be16u ( & s -> g ); tmp . mct = bytestream2_get_byteu ( & s -> g ); if ( tmp . mct && s -> ncomponents < 3 )  return AVERROR_INVALIDDATA ; if ( ( ret = get_cox ( s , & tmp ) ) < 0 )  static int get_cox(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *c) uint8_t byte ; if ( bytestream2_get_bytes_left ( & s -> g ) < 5 )  return AVERROR_INVALIDDATA ; c -> nreslevels = bytestream2_get_byteu ( & s -> g ) + 1; if ( c -> nreslevels >= JPEG2000_MAX_RESLEVELS )  return AVERROR_INVALIDDATA ; if ( c -> nreslevels <= s -> reduction_factor )  return AVERROR ( EINVAL ) ; c -> nreslevels2decode = c -> nreslevels - s -> reduction_factor; c -> log2_cblk_width = ( bytestream2_get_byteu ( & s -> g ) & 15 ) + 2; c -> log2_cblk_height = ( bytestream2_get_byteu ( & s -> g ) & 15 ) + 2; if ( c -> log2_cblk_width > 10 || c -> log2_cblk_height > 10 || c -> log2_cblk_width + c -> log2_cblk_height > 12 )  return AVERROR_INVALIDDATA ; c -> cblk_style = bytestream2_get_byteu ( & s -> g ); c -> transform = bytestream2_get_byteu ( & s -> g ); if ( ( s -> avctx -> flags & AV_CODEC_FLAG_BITEXACT ) && ( c -> transform == FF_DWT97 ) )  c -> transform = FF_DWT97_INT; if ( c -> transform == FF_DWT53 )  s -> avctx -> properties |= FF_CODEC_PROPERTY_LOSSLESS; if ( c -> csty & JPEG2000_CSTY_PREC )  int i ; byte = bytestream2_get_byte ( & s -> g ); c -> log2_prec_widths [ i ] = byte & 0x0F; c -> log2_prec_heights [ i ] = ( byte >> 4 ) & 0x0F; if ( i )  if ( c -> log2_prec_widths [ i ] == 0 || c -> log2_prec_heights [ i ] == 0 )  return AVERROR_INVALIDDATA ; return 0 ; return ret ; return 0 ; ret = get_qcc ( s , len , qntsty , properties ); static int get_qcc(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle uint8_t *properties) int compno ; if ( bytestream2_get_bytes_left ( & s -> g ) < 1 )  return AVERROR_INVALIDDATA ; compno = bytestream2_get_byteu ( & s -> g ); if ( compno >= s -> ncomponents )  return AVERROR_INVALIDDATA ; properties [ compno ] |= HAD_QCC; return get_qcx ( s , n - 1 , q + compno ) ; static int get_qcx(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle *q) int i , x ; if ( bytestream2_get_bytes_left ( & s -> g ) < 1 )  return AVERROR_INVALIDDATA ; x = bytestream2_get_byteu ( & s -> g ); q -> nguardbits = x >> 5; q -> quantsty = x & 0x1f; if ( q -> quantsty == JPEG2000_QSTY_NONE )  n -= 3; if ( bytestream2_get_bytes_left ( & s -> g ) < n || n > JPEG2000_MAX_DECLEVELS * 3 )  return AVERROR_INVALIDDATA ; if ( q -> quantsty == JPEG2000_QSTY_SI )  if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  return AVERROR_INVALIDDATA ; n = ( n - 3 ) >> 1; if ( bytestream2_get_bytes_left ( & s -> g ) < 2 * n || n > JPEG2000_MAX_DECLEVELS * 3 )  return AVERROR_INVALIDDATA ; return 0 ; ret = get_qcd ( s , len , qntsty , properties ); static int get_qcd(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle uint8_t *properties) Jpeg2000QuantStyle tmp ; int compno , ret ; memset ( & tmp , 0 , sizeof ( tmp ) ); if ( ( ret = get_qcx ( s , n , & tmp ) ) < 0 )  static int get_qcx(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle *q) int i , x ; if ( bytestream2_get_bytes_left ( & s -> g ) < 1 )  return AVERROR_INVALIDDATA ; x = bytestream2_get_byteu ( & s -> g ); q -> nguardbits = x >> 5; q -> quantsty = x & 0x1f; if ( q -> quantsty == JPEG2000_QSTY_NONE )  n -= 3; if ( bytestream2_get_bytes_left ( & s -> g ) < n || n > JPEG2000_MAX_DECLEVELS * 3 )  return AVERROR_INVALIDDATA ; if ( q -> quantsty == JPEG2000_QSTY_SI )  if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  return AVERROR_INVALIDDATA ; n = ( n - 3 ) >> 1; if ( bytestream2_get_bytes_left ( & s -> g ) < 2 * n || n > JPEG2000_MAX_DECLEVELS * 3 )  return AVERROR_INVALIDDATA ; return 0 ; return ret ; return 0 ; ret = get_poc ( s , len , poc ); if ( ! ( ret = get_sot ( s , len ) ) )  static int get_sot(Jpeg2000DecoderContext *s, int n) uint16_t Isot ; uint32_t Psot ; if ( bytestream2_get_bytes_left ( & s -> g ) < 8 )  return AVERROR_INVALIDDATA ; s -> curtileno = 0; Isot = bytestream2_get_be16u ( & s -> g ); if ( Isot >= s -> numXtiles * s -> numYtiles )  return AVERROR_INVALIDDATA ; s -> curtileno = Isot; Psot = bytestream2_get_be32u ( & s -> g ); if ( ! Psot )  Psot = bytestream2_get_bytes_left ( & s -> g ) + n + 2; if ( Psot > bytestream2_get_bytes_left ( & s -> g ) + n + 2 )  return AVERROR_INVALIDDATA ; return 0 ; codsty = s -> tile [ s -> curtileno ] . codsty; qntsty = s -> tile [ s -> curtileno ] . qntsty; poc = & s -> tile [ s -> curtileno ] . poc; properties = s -> tile [ s -> curtileno ] . properties; ret = get_tlm ( s , len ); static uint8_t get_tlm(Jpeg2000DecoderContext *s, int n) return 0 ; ret = get_plt ( s , len ); static uint8_t get_plt(Jpeg2000DecoderContext *s, int n) return 0 ; if ( bytestream2_tell ( & s -> g ) - oldpos != len || ret )  static int get_poc(Jpeg2000DecoderContext *s, int size, Jpeg2000POC *p) int i ; int elem_size = s -> ncomponents <= 257 ? 7 : 9 ; Jpeg2000POC tmp = { { { 0 } } } ; if ( bytestream2_get_bytes_left ( & s -> g ) < 5 || size < 2 + elem_size )  if ( elem_size > 7 )  tmp . nb_poc = ( size - 2 ) / elem_size; if ( tmp . nb_poc > MAX_POCS )  for (i = 0; i<tmp.nb_poc; i++) Jpeg2000POCEntry * e = & tmp . poc [ i ] ; e -> RSpoc = bytestream2_get_byteu ( & s -> g ); e -> CSpoc = bytestream2_get_byteu ( & s -> g ); e -> LYEpoc = bytestream2_get_be16u ( & s -> g ); e -> REpoc = bytestream2_get_byteu ( & s -> g ); e -> CEpoc = bytestream2_get_byteu ( & s -> g ); e -> Ppoc = bytestream2_get_byteu ( & s -> g ); if ( ! e -> CEpoc )  e -> CEpoc = 256; if ( e -> CEpoc > s -> ncomponents )  e -> CEpoc = s -> ncomponents; if ( e -> RSpoc >= e -> REpoc || e -> REpoc > 33 || e -> CSpoc >= e -> CEpoc || e -> CEpoc > s -> ncomponents || ! e -> LYEpoc )  if ( ! p -> nb_poc || p -> is_default )  if ( p -> nb_poc + tmp . nb_poc > MAX_POCS )  memcpy ( p -> poc + p -> nb_poc , tmp . poc , tmp . nb_poc * sizeof ( tmp . poc [ 0 ] ) ); p -> nb_poc += tmp . nb_poc; p -> is_default = 0; 