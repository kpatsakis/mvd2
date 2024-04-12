 proto_item_append_text(proto_item *pi, const char *format, ...) fi = PITEM_FINFO ( pi ); if ( fi == NULL )  if ( ! PROTO_ITEM_IS_HIDDEN ( pi ) )  if ( fi -> rep == NULL )  proto_item_fill_label ( fi , fi -> rep -> representation );  proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; guint8 * bytes ; guint32 integer ; e_guid_t * guid ; gchar * name ; char * tmp ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  bytes = ( guint8 * ) fvalue_get ( & fi -> value ); tmp = abs_time_to_str ( NULL , ( const nstime_t * ) fvalue_get ( & fi -> value ) , ( absolute_time_display_e ) hfinfo -> display , TRUE ); tmp = rel_time_to_secs_str ( NULL , ( const nstime_t * ) fvalue_get ( & fi -> value ) ); integer = fvalue_get_uinteger ( & fi -> value ); tmp = ( char * ) get_ipxnet_name ( NULL , integer ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); guid = ( e_guid_t * ) fvalue_get ( & fi -> value ); tmp = guid_to_str ( NULL , guid ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); name = oid_resolved_from_encoded ( NULL , bytes , fvalue_length ( & fi -> value ) ); tmp = oid_encoded2string ( NULL , bytes , fvalue_length ( & fi -> value ) ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); name = rel_oid_resolved_from_encoded ( NULL , bytes , fvalue_length ( & fi -> value ) ); tmp = rel_oid_encoded2string ( NULL , bytes , fvalue_length ( & fi -> value ) ); if ( name )  label_fill ( label_str , 0 , hfinfo , tmp ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) static const char trunc_str [ ] = " [truncated]" ; const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 