 ArrayBufferBuilder::append(const uint8_t *aNewData, uint32_t uint32_t aMaxGrowth) if ( mLength + aDataLen > mCapacity )  uint32_t newcap ; if ( ! aMaxGrowth || mCapacity < aMaxGrowth )  newcap = mCapacity * 2; newcap = mCapacity + aMaxGrowth; if ( newcap < mLength + aDataLen )  newcap = mLength + aDataLen; if ( newcap < mCapacity )  if ( ! setCapacity ( newcap ) )  memcpy ( mDataPtr + mLength , aNewData , aDataLen ); 