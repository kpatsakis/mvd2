static CVE_2012_2393_VULN_dictionary_load(void) gboolean do_debug_parser = getenv ( "WIRESHARK_DEBUG_DIAM_DICT_PARSER" ) ? TRUE : FALSE ; d = ddict_scan ( dir , "dictionary.xml" , do_debug_parser ); if ( d == NULL )  ddict_print ( stdout , d ); for (t = d->typedefns; t; t = t->next) if ( t -> name == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid Type (empty name): parent==%s\n" , t -> parent ? t -> parent : "(null)" ); if ( g_hash_table_lookup ( build_dict . types , t -> name ) )  if ( t -> parent )  parent = g_hash_table_lookup ( build_dict . types , t -> parent ); if ( ! parent )  g_hash_table_insert ( build_dict . types , t -> name , ( void * ) parent ); if ( p = d -> applications )  for (; p; p = p->next) value_string item = { p -> code , p -> name } ; g_array_append_val ( arr , item ); if ( v = d -> vendors )  for ( ; v; v = v->next) value_string item = { v -> code , v -> name } ; if ( v -> name == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid Vendor (empty name): code==%d\n" , v -> code ); if ( g_hash_table_lookup ( vendors , v -> name ) )  g_array_append_val ( vnd_shrt_arr , item ); vnd -> code = v -> code; vnd -> vs_cmds = g_array_new ( TRUE , TRUE , sizeof ( value_string ) ); vnd -> vs_avps = g_array_new ( TRUE , TRUE , sizeof ( value_string ) ); vnd -> vs_avps_ext = NULL; pe_tree_insert32 ( dictionary . vnds , vnd -> code , vnd ); g_hash_table_insert ( vendors , v -> name , vnd ); if ( c = d -> cmds )  for (; c; c = c->next) if ( c -> vendor == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid Vendor (empty name) for command %s\n" , c -> name ? c -> name : "(null)" ); if ( vnd = g_hash_table_lookup ( vendors , c -> vendor ) )  value_string item = { c -> code , c -> name } ; g_array_append_val ( vnd -> vs_cmds , item ); g_array_append_val ( all_cmds , item ); fprintf ( stderr , "Diameter Dictionary: No Vendor: %s\n" , c -> vendor ); for (a = d->avps; a; a = a->next) const char * vend = a -> vendor ? a -> vendor : "None" ; if ( a -> name == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid AVP (empty name)\n" ); if ( vnd = g_hash_table_lookup ( vendors , vend ) )  value_string vndvs = { a -> code , a -> name } ; g_array_append_val ( vnd -> vs_avps , vndvs ); fprintf ( stderr , "Diameter Dictionary: No Vendor: %s\n" , vend ); if ( e = a -> enums )  for (; e; e = e->next) value_string item = { e -> code , e -> name } ; g_array_append_val ( arr , item ); for( x = d->xmlpis; x; x = x->next ) if ( ( strcase_equal ( x -> name , "avp-proto" ) && strcase_equal ( x -> key , a -> name ) ) || ( a -> type && strcase_equal ( x -> name , "type-proto" ) && strcase_equal ( x -> key , a -> type ) ) )  avp_data = x -> value; if ( ( ! type ) && a -> type )  type = g_hash_table_lookup ( build_dict . types , a -> type ); if ( ! type )  avp = type -> build ( type , a -> code , vnd , a -> name , vs , avp_data ); if ( avp != NULL )  g_hash_table_insert ( build_dict . avps , a -> name , avp ); emem_tree_key_t k [ ] = { { 1 , & ( a -> code ) } , { 1 , & ( vnd -> code ) } , { 0 , NULL } } ; pe_tree_insert32_array ( dictionary . avps , k , avp ); 