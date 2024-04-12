status_t MPEG4Extractor::parseChunk(off64_t *offset, int depth) uint32_t hdr [ 2 ] ; if ( mDataSource -> readAt ( * offset , hdr , 8 ) < 8 )  uint64_t chunk_size = ntohl ( hdr [ 0 ] ) ; if ( chunk_size == 1 )  if ( mDataSource -> readAt ( * offset + 8 , & chunk_size , 8 ) < 8 )  chunk_size = ntoh64 ( chunk_size ); if ( chunk_type == FOURCC ( 's' , 't' , 'b' , 'l' ) )  if ( mDataSource -> flags ( ) & ( DataSource :: kWantsPrefetching | DataSource :: kIsCachingDataSource ) )  sp < MPEG4DataSource > cachedSource = new MPEG4DataSource ( mDataSource ) ; MPEG4DataSource::MPEG4DataSource(const sp<DataSource> &source) if ( cachedSource -> setCachedRange ( * offset , chunk_size ) == OK )  status_t MPEG4DataSource::setCachedRange(off64_t offset, size_t size) mCache = ( uint8_t * ) malloc ( size ); if ( mCache == NULL )  ssize_t err = mSource -> readAt ( mCachedOffset , mCache , mCachedSize ) ; if ( err < ( ssize_t ) size )  