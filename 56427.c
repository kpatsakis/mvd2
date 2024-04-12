svn_error_t *svn_utf_cstring_to_utf8_ex(const char **dest,const char *src,const char *frompage,const char *convset_key,apr_pool_t *pool) return svn_utf_cstring_to_utf8_ex2 ( dest , src , frompage , pool ) ; svn_error_t *svn_utf_cstring_to_utf8_ex2(const char **dest,const char *src,const char *frompage,apr_pool_t *pool) xlate_handle_node_t * node ; svn_error_t * err ; const char * convset_key = get_xlate_key ( SVN_APR_UTF8_CHARSET , frompage , pool ) ; static const char *get_xlate_key(const char *topage,const char *frompage,apr_pool_t *pool) if ( frompage == ( ( const char * ) 1 ) )  frompage = "APR_LOCALE_CHARSET"; if ( frompage == ( ( const char * ) 0 ) )  frompage = "APR_DEFAULT_CHARSET"; if ( topage == ( ( const char * ) 1 ) )  topage = "APR_LOCALE_CHARSET"; if ( topage == ( ( const char * ) 0 ) )  topage = "APR_DEFAULT_CHARSET"; return ( apr_pstrcat ( pool , "svn-utf-" , frompage , "to" , topage , "-xlate-handle" , ( ( char * ) ( ( void * ) 0 ) ) ) ) ; svn_error_t * svn_err__temp = get_xlate_handle_node ( & node , SVN_APR_UTF8_CHARSET , frompage , convset_key , pool ) ; static svn_error_t *get_xlate_handle_node(xlate_handle_node_t **ret,const char *topage,const char *frompage,const char *userdata_key,apr_pool_t *pool) xlate_handle_node_t * old_node = ( ( void * ) 0 ) ; if ( userdata_key )  if ( xlate_handle_hash )  if ( userdata_key == SVN_UTF_NTOU_XLATE_HANDLE )  old_node = ( atomic_swap ( & xlat_ntou_static_handle , ( ( void * ) 0 ) ) ); if ( userdata_key == SVN_UTF_UTON_XLATE_HANDLE )  old_node = ( atomic_swap ( & xlat_uton_static_handle , ( ( void * ) 0 ) ) ); if ( old_node && old_node -> valid )  return 0 ; void * p ; old_node = p; if ( old_node && old_node -> valid )  return 0 ; return xlate_alloc_handle ( ret , topage , frompage , pool ) ; svn_mutex__t * svn_mutex__m = xlate_handle_mutex ; svn_error_t * svn_err__temp = svn_mutex__lock ( svn_mutex__m ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  svn_error_t * svn_err__temp = svn_mutex__unlock ( svn_mutex__m , get_xlate_handle_node_internal ( ret , topage , frompage , userdata_key , pool ) ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  return 0 ; if ( svn_err__temp )  while ( 0 )  err = convert_cstring ( dest , src , node , pool ); static svn_error_t *convert_cstring(const char **dest,const char *src,xlate_handle_node_t *node,apr_pool_t *pool) if ( node -> handle )  apr_size_t len = strlen ( src ) ; svn_error_t * svn_err__temp = check_non_ascii ( src , len , pool ) ; if ( svn_err__temp )  return svn_err__temp ; * dest = ( apr_pstrmemdup ( pool , src , len ) ); 