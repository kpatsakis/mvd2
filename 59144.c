qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( find_tag ( index , TAG_A2B0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT16_TYPE )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT_MAB_TYPE )  profile -> mAB = read_tag_lutmABType ( src , index , TAG_A2B0 ); if ( find_tag ( index , TAG_B2A0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT16_TYPE )  profile -> B2A0 = read_tag_lutType ( src , index , TAG_B2A0 ); static struct lutType *read_tag_lutType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; uint32_t offset = tag -> offset ; uint32_t type = read_u32 ( src , offset ) ; uint16_t num_input_table_entries ; uint16_t num_output_table_entries ; uint8_t in_chan , grid_points , out_chan ; uint32_t clut_offset , output_offset ; uint32_t clut_size ; size_t entry_size ; struct lutType * lut ; uint32_t i ; if ( type == LUT8_TYPE )  num_input_table_entries = 256; num_output_table_entries = 256; entry_size = 1; if ( type == LUT16_TYPE )  num_input_table_entries = read_u16 ( src , offset + 48 ); num_output_table_entries = read_u16 ( src , offset + 50 ); entry_size = 2; in_chan = read_u8 ( src , offset + 8 ); out_chan = read_u8 ( src , offset + 9 ); grid_points = read_u8 ( src , offset + 10 ); clut_size = pow ( grid_points , in_chan ); if ( clut_size > MAX_CLUT_SIZE )  if ( in_chan != 3 || out_chan != 3 )  lut = malloc ( sizeof ( struct lutType ) + ( num_input_table_entries * in_chan + clut_size * out_chan + num_output_table_entries * out_chan ) * sizeof ( float ) ); if ( ! lut )  lut -> input_table = & lut -> table_data [ 0 ]; lut -> clut_table = & lut -> table_data [ in_chan * num_input_table_entries ]; lut -> output_table = & lut -> table_data [ in_chan * num_input_table_entries + clut_size * out_chan ]; lut -> num_input_table_entries = num_input_table_entries; lut -> num_output_table_entries = num_output_table_entries; lut -> num_input_channels = read_u8 ( src , offset + 8 ); lut -> num_output_channels = read_u8 ( src , offset + 9 ); lut -> num_clut_grid_points = read_u8 ( src , offset + 10 ); lut -> e00 = read_s15Fixed16Number ( src , offset + 12 ); lut -> e01 = read_s15Fixed16Number ( src , offset + 16 ); lut -> e02 = read_s15Fixed16Number ( src , offset + 20 ); lut -> e10 = read_s15Fixed16Number ( src , offset + 24 ); lut -> e11 = read_s15Fixed16Number ( src , offset + 28 ); lut -> e12 = read_s15Fixed16Number ( src , offset + 32 ); lut -> e20 = read_s15Fixed16Number ( src , offset + 36 ); lut -> e21 = read_s15Fixed16Number ( src , offset + 40 ); lut -> e22 = read_s15Fixed16Number ( src , offset + 44 ); for (i = 0; i < lut->num_input_table_entries * in_chan; i++) if ( type == LUT8_TYPE )  lut -> input_table [ i ] = uInt16Number_to_float ( read_uInt16Number ( src , offset + 52 + i * entry_size ) ); clut_offset = offset + 52 + lut -> num_input_table_entries * in_chan * entry_size; for (i = 0; i < clut_size * out_chan; i+=3) if ( type == LUT8_TYPE )  lut -> clut_table [ i + 0 ] = uInt16Number_to_float ( read_uInt16Number ( src , clut_offset + i * entry_size + 0 ) ); lut -> clut_table [ i + 1 ] = uInt16Number_to_float ( read_uInt16Number ( src , clut_offset + i * entry_size + 2 ) ); lut -> clut_table [ i + 2 ] = uInt16Number_to_float ( read_uInt16Number ( src , clut_offset + i * entry_size + 4 ) ); static uInt16Number read_uInt16Number(struct mem_source *mem, size_t offset) return read_u16 ( mem , offset ) ; static uint16_t read_u16(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 2 )  be16 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be16_to_cpu ( k ) ; 