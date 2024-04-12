status_t MPEG4Source::parseSampleAuxiliaryInformationSizes(off64_t offset, off64_t size) if ( mCurrentSamples . IsEmpty ( ) )  uint8_t version ; if ( mDataSource -> readAt ( offset , & version , sizeof ( version ) ) < ( ssize_t ) sizeof ( version ) )  if ( version != 0 )  offset ++; uint32_t flags ; if ( ! mDataSource -> getUInt24 ( offset , & flags ) )  offset += 3; if ( flags & 1 )  uint32_t tmp ; if ( ! mDataSource -> getUInt32 ( offset , & tmp ) )  offset += 4; if ( ! mDataSource -> getUInt32 ( offset , & tmp ) )  offset += 4; uint8_t defsize ; if ( mDataSource -> readAt ( offset , & defsize , 1 ) != 1 )  mCurrentDefaultSampleInfoSize = defsize; offset ++; uint32_t smplcnt ; if ( ! mDataSource -> getUInt32 ( offset , & smplcnt ) )  if ( mCurrentDefaultSampleInfoSize != 0 )  if ( smplcnt > mCurrentSampleInfoAllocSize )  mCurrentSampleInfoSizes = ( uint8_t * ) realloc ( mCurrentSampleInfoSizes , smplcnt ); mDataSource -> readAt ( offset , mCurrentSampleInfoSizes , smplcnt ); 