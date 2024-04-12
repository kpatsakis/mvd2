svn_error_t *svn_dirent_condense_targets(const char **pcommon,apr_array_header_t **pcondensed_targets,const apr_array_header_t *targets,svn_boolean_t remove_redundancies,apr_pool_t *result_pool,apr_pool_t *scratch_pool) int i ; svn_boolean_t * removed ; apr_array_header_t * abs_targets ; if ( targets -> nelts <= 0 )  svn_error_t * svn_err__temp = svn_dirent_get_absolute ( pcommon , ( ( const char * * ) ( targets -> elts ) ) [ 0 ] , scratch_pool ) ; if ( svn_err__temp )  while ( 0 )  if ( targets -> nelts == 1 )  removed = ( memset ( apr_palloc ( scratch_pool , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) , 0 , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) ); abs_targets = apr_array_make ( scratch_pool , targets -> nelts , ( sizeof ( const char * ) ) ); for (i = 1; i < targets -> nelts; ++i) const char * rel = ( ( const char * * ) ( targets -> elts ) ) [ i ] ; svn_error_t * svn_err__temp = svn_dirent_get_absolute ( & absolute , rel , scratch_pool ) ; if ( svn_err__temp )  while ( 0 )  if ( pcondensed_targets != ( ( void * ) 0 ) )  if ( remove_redundancies )  for (i = 0; i < abs_targets -> nelts; ++i) int j ; if ( removed [ i ] )  for (j = i + 1; j < abs_targets -> nelts; ++j) const char * abs_targets_i ; const char * abs_targets_j ; const char * ancestor ; if ( removed [ j ] )  abs_targets_i = ( ( const char * * ) ( abs_targets -> elts ) ) [ i ]; abs_targets_j = ( ( const char * * ) ( abs_targets -> elts ) ) [ j ]; ancestor = ( svn_dirent_get_longest_ancestor ( abs_targets_i , abs_targets_j , scratch_pool ) ); if ( ( * ancestor ) == '\0' )  if ( strcmp ( ancestor , abs_targets_i ) == 0 )  removed [ j ] = ! 0; if ( strcmp ( ancestor , abs_targets_j ) == 0 )  removed [ i ] = ! 0; char *svn_dirent_get_longest_ancestor(const char *dirent1,const char *dirent2,apr_pool_t *pool) return apr_pstrndup ( pool , dirent1 , get_longest_ancestor_length ( type_dirent , dirent1 , dirent2 , pool ) ) ; static apr_size_t get_longest_ancestor_length(path_type_t types,const char *path1,const char *path2,apr_pool_t *pool) apr_size_t path2_len ; path2_len = strlen ( path2 ); if ( i == path1_len || i == path2_len )  if ( i == path1_len && path2 [ i ] == 47 || i == path2_len && path1 [ i ] == 47 || i == path1_len && i == path2_len )  