static int mov_read_smi(MOVContext *c, AVIOContext *pb, MOVAtom atom) AVStream * st ; if ( c -> fc -> nb_streams < 1 )  st = c -> fc -> streams [ c -> fc -> nb_streams - 1 ]; if ( ( uint64_t ) atom . size > ( 1 << 30 ) )  st -> codec -> extradata_size = 0; st -> codec -> extradata = av_mallocz ( atom . size + 0x5a + FF_INPUT_BUFFER_PADDING_SIZE ); if ( ! st -> codec -> extradata )  st -> codec -> extradata_size = 0x5a + atom . size; memcpy ( st -> codec -> extradata , "SVQ3" , 4 ); avio_read ( pb , st -> codec -> extradata + 0x5a , atom . size ); av_dlog ( c -> fc , "Reading SMI %" PRId64 "  %s\n" , atom . size , st -> codec -> extradata + 0x5a ) 