static reportComment(XML_Parser parser, const ENCODING const char *start, const char *end) XML_Char * data ; if ( ! commentHandler )  data = poolStoreString ( & tempPool , enc , start + enc -> minBytesPerChar * 4 , end - enc -> minBytesPerChar * 3 ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  static XML_Char poolAppend(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! pool -> ptr && ! poolGrow ( pool ) )  if ( ptr == end )  if ( ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  if ( pool -> blocks && pool -> start == pool -> blocks -> s )  BLOCK * tem ; int blockSize = ( int ) ( pool -> end - pool -> start ) ; if ( blockSize < INIT_BLOCK_SIZE )  blockSize = INIT_BLOCK_SIZE; blockSize *= 2; tem = ( BLOCK * ) pool -> mem -> malloc_fcn ( offsetof ( BLOCK , s ) + blockSize * sizeof ( XML_Char ) ); if ( ! tem )  tem -> size = blockSize; tem -> next = pool -> blocks; pool -> blocks = tem; if ( pool -> ptr != pool -> start )  memcpy ( tem -> s , pool -> start , ( pool -> ptr - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = tem -> s + ( pool -> ptr - pool -> start ); pool -> start = tem -> s; pool -> end = tem -> s + blockSize; 