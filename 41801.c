int svn_config_enumerate(svn_config_t *cfg,const char *section,svn_config_enumerator_t callback,void *baton) cfg_section_t * sec ; apr_hash_index_t * opt_ndx ; apr_pool_t * subpool ; if ( sec == ( ( void * ) 0 ) )  subpool = svn_pool_create_ex ( cfg -> x_pool , ( ( void * ) 0 ) ); for (opt_ndx = apr_hash_first(subpool,sec -> options); opt_ndx != ((void *)0); opt_ndx = apr_hash_next(opt_ndx)) void * opt_ptr ; cfg_option_t * opt ; const char * temp_value ; opt = opt_ptr; make_string_from_option ( & temp_value , cfg , sec , opt , ( ( void * ) 0 ) ); if ( ! callback ( opt -> name , temp_value , baton ) )  static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  