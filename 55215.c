int svn_config_enumerate2(svn_config_t *cfg,const char *section,svn_config_enumerator2_t callback,void *baton,apr_pool_t *pool) cfg_section_t * sec ; apr_hash_index_t * opt_ndx ; apr_pool_t * iteration_pool ; if ( sec == ( ( void * ) 0 ) )  iteration_pool = svn_pool_create_ex ( pool , ( ( void * ) 0 ) ); for (opt_ndx = apr_hash_first(pool,sec -> options); opt_ndx != ((void *)0); opt_ndx = apr_hash_next(opt_ndx)) void * opt_ptr ; cfg_option_t * opt ; const char * temp_value ; opt = opt_ptr; make_string_from_option ( & temp_value , cfg , sec , opt , ( ( void * ) 0 ) ); if ( ! callback ( opt -> name , temp_value , baton , iteration_pool ) )  static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  apr_pool_t * tmp_pool = x_pool ? x_pool : svn_pool_create_ex ( cfg -> x_pool , ( ( void * ) 0 ) ) ; expand_option_value ( cfg , section , opt -> value , & opt -> x_value , tmp_pool ); static void expand_option_value(svn_config_t *cfg,cfg_section_t *section,const char *opt_value,const char **opt_x_valuep,apr_pool_t *x_pool) const char * parse_from = opt_value ; const char * name_start ; const char * name_end ; while ( parse_from != ( ( void * ) 0 ) && ( * parse_from ) != '\0' && ( name_start = ( strstr ( parse_from , "%(" ) ) ) != ( ( void * ) 0 ) )  name_start += sizeof ( "%(" ) - 1; if ( ( * name_start ) == '\0' )  name_end = ( strstr ( name_start , ")s" ) ); if ( name_end != ( ( void * ) 0 ) )  cfg_option_t * x_opt ; apr_size_t len = ( name_end - name_start ) ; char * name = apr_pstrmemdup ( x_pool , name_start , len ) ; x_opt = find_option ( cfg , section -> name , name , ( ( void * ) 0 ) ); static cfg_option_t *find_option(svn_config_t *cfg,const char *section,const char *option,cfg_section_t **sectionp) svn_stringbuf_set ( cfg -> tmp_key , section ); if ( ! cfg -> section_names_case_sensitive )  make_hash_key ( cfg -> tmp_key -> data ); inline static char *make_hash_key(char *key) for (p = key; ( *p) != 0; ++p) * p = ( ( char ) ( tolower ( ( ( unsigned char ) ( * p ) ) ) ) ); return key ; sec_ptr = apr_hash_get ( cfg -> sections , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ); if ( sectionp != ( ( void * ) 0 ) )  * sectionp = sec_ptr; if ( sec_ptr != ( ( void * ) 0 ) && option != ( ( void * ) 0 ) )  cfg_section_t * sec = sec_ptr ; svn_stringbuf_set ( cfg -> tmp_key , option ); if ( ! cfg -> option_names_case_sensitive )  make_hash_key ( cfg -> tmp_key -> data ); inline static char *make_hash_key(char *key) * p = ( ( char ) ( tolower ( ( ( unsigned char ) ( * p ) ) ) ) ); return key ; opt = ( apr_hash_get ( sec -> options , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ) ); if ( opt == ( ( void * ) 0 ) && apr_strnatcasecmp ( section , "DEFAULT" ) != 0 )  opt = find_option ( cfg , "DEFAULT" , option , & sec ); return opt ; if ( x_opt != ( ( void * ) 0 ) )  const char * cstring ; make_string_from_option ( & cstring , cfg , section , x_opt , x_pool ); parse_from = name_end + ( sizeof ( ")s" ) - 1 ); parse_from = name_end + ( sizeof ( ")s" ) - 1 ); parse_from = ( ( void * ) 0 ); static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  