svn_string_t *svn_string_create(const char *cstring,apr_pool_t *pool) return svn_string_ncreate ( cstring , strlen ( cstring ) , pool ) ; svn_string_t *svn_string_ncreate(const char *bytes,apr_size_t size,apr_pool_t *pool) void * mem ; char * data ; svn_string_t * new_string ; mem = apr_palloc ( pool , sizeof ( ( * new_string ) ) + size + 1 ); data = ( ( char * ) mem ) + sizeof ( ( * new_string ) ); memcpy ( data , bytes , size ); data [ size ] = '\0'; 