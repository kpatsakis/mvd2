void scsi_req_print(SCSIRequest *req) FILE * fp = stderr ; fprintf ( fp , "[%s id=%d] %s" , req -> dev -> qdev . parent_bus -> name , req -> dev -> id , scsi_command_name ( req -> cmd . buf [ 0 ] ) ); const char *scsi_command_name(uint8_t cmd) static const char * names [ ] [ TEST_UNIT_READY ] = "TEST_UNIT_READY" [ REWIND ] = "REWIND" [ REQUEST_SENSE ] = "REQUEST_SENSE" [ FORMAT_UNIT ] = "FORMAT_UNIT" [ READ_BLOCK_LIMITS ] = "READ_BLOCK_LIMITS" [ REASSIGN_BLOCKS ] = "REASSIGN_BLOCKS/INITIALIZE ELEMENT STATUS" , if ( cmd >= ARRAY_SIZE ( names ) || names [ cmd ] == NULL )  return "*UNKNOWN*" ; return names [ cmd ] ; fprintf ( fp , " 0x%02x" , req -> cmd . buf [ i ] ); fprintf ( fp , " - none\n" ); fprintf ( fp , " - from-dev len=%zd\n" , req -> cmd . xfer ); fprintf ( fp , " - to-dev len=%zd\n" , req -> cmd . xfer ); fprintf ( fp , " - Oops\n" ); 