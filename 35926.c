Buffer ReadBufferWithoutRelcache(RelFileNode rnode,ForkNumber forkNum,BlockNumber blockNum,ReadBufferMode mode,BufferAccessStrategy strategy) bool hit ; SMgrRelation smgr = smgropen ( rnode , - 1 ) ; return ReadBuffer_common ( smgr , 'p' , forkNum , blockNum , mode , strategy , & hit ) ; static Buffer ReadBuffer_common(SMgrRelation smgr,char relpersistence,ForkNumber forkNum,BlockNumber blockNum,ReadBufferMode mode,BufferAccessStrategy strategy,bool *hit) volatile BufferDesc * bufHdr ; Block bufBlock ; bool found ; bool isExtend ; bool isLocalBuf = ( smgr -> smgr_rnode . backend != - 1 ) ; isExtend = ( blockNum == ( ( BlockNumber ) 0xFFFFFFFF ) ); if ( isExtend )  blockNum = smgrnblocks ( smgr , forkNum ); if ( isLocalBuf )  bufHdr = ( LocalBufferAlloc ( smgr , forkNum , blockNum , & found ) ); bufHdr = BufferAlloc ( smgr , relpersistence , forkNum , blockNum , strategy , & found ); static volatile BufferDesc *BufferAlloc(SMgrRelation smgr,char relpersistence,ForkNumber forkNum,BlockNumber blockNum,BufferAccessStrategy strategy,bool *foundPtr) BufferTag newTag ; uint32 newHash ; BufFlags oldFlags ; int buf_id ; volatile BufferDesc * buf ; ( newTag . rnode = smgr -> smgr_rnode . node , newTag . forkNum = forkNum ) , newTag . blockNum = blockNum; newHash = BufTableHashCode ( & newTag ); buf_id = BufTableLookup ( & newTag , newHash ); if ( buf_id >= 0 )  buf = ( & BufferDescriptors [ buf_id ] ); return buf ; buf = StrategyGetBuffer ( strategy , & lock_held ); oldFlags = buf -> flags; if ( oldFlags & 1 << 0 )  if ( LWLockConditionalAcquire ( buf -> content_lock , LW_SHARED ) )  if ( strategy != ( ( void * ) 0 ) && XLogNeedsFlush ( ( ( PageHeader ) ( ( Block ) ( BufferBlocks + ( ( Size ) ( buf -> buf_id ) ) * 8192 ) ) ) -> pd_lsn ) && StrategyRejectBuffer ( strategy , buf ) )  buf_id = BufTableInsert ( & newTag , newHash , buf -> buf_id ); if ( buf_id >= 0 )  buf = ( & BufferDescriptors [ buf_id ] ); return buf ; oldFlags = buf -> flags; if ( buf -> refcount == 1 && ! ( oldFlags & 1 << 0 ) )  * ( ( volatile slock_t * ) ( & buf -> buf_hdr_lock ) ) = 0; buf -> tag = newTag; buf -> flags &= ~ ( 1 << 1 | 1 << 0 | 1 << 5 | 1 << 7 | 1 << 4 | 1 << 8 ); if ( relpersistence == 'p' )  buf -> flags |= 1 << 2; buf -> usage_count = 1; * ( ( volatile slock_t * ) ( & buf -> buf_hdr_lock ) ) = 0; return buf ; if ( found )  if ( ! isExtend )  bufBlock = ( isLocalBuf ? LocalBufferBlockPointers [ - ( bufHdr -> buf_id + 2 ) ] : ( ( Block ) ( BufferBlocks + ( ( Size ) ( bufHdr -> buf_id ) ) * 8192 ) ) ); if ( isLocalBuf )  bufHdr -> flags &= ~ ( 1 << 1 ); bufHdr -> flags &= ~ ( 1 << 1 ); * ( ( volatile slock_t * ) ( & bufHdr -> buf_hdr_lock ) ) = 0; while ( ! StartBufferIO ( bufHdr , ( ( bool ) 1 ) ) )  static bool StartBufferIO(volatile BufferDesc *buf,bool forInput) if ( ! ( ( buf -> flags ) & 1 << 3 ) )  * ( ( volatile slock_t * ) ( & buf -> buf_hdr_lock ) ) = 0; if ( forInput ? ( buf -> flags ) & 1 << 1 : ! ( ( buf -> flags ) & 1 << 0 ) )  return ( bool ) 0 ; return ( bool ) 1 ; bufBlock = ( isLocalBuf ? LocalBufferBlockPointers [ - ( bufHdr -> buf_id + 2 ) ] : ( ( Block ) ( BufferBlocks + ( ( Size ) ( bufHdr -> buf_id ) ) * 8192 ) ) ); if ( isExtend )  if ( mode == RBM_ZERO )  void * _vstart = ( void * ) ( ( char * ) bufBlock ) ; int _val = 0 ; Size _len = 8192 ; if ( ( ( ( intptr_t ) _vstart ) & sizeof ( long ) - 1 ) == 0 && ( _len & sizeof ( long ) - 1 ) == 0 && _val == 0 && _len <= 1024 && 1024 != 0 )  memset ( _vstart , _val , _len ); while ( 0 )  