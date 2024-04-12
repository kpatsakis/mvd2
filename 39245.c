static CVE_2011_1495_VULN__ctl_diag_read_buffer(void __user *arg, enum block_state state) struct mpt2_diag_read_buffer karg ; struct mpt2_diag_read_buffer __user * uarg = arg ; struct MPT2SAS_ADAPTER * ioc ; void * request_data , * diag_data ; u8 buffer_type ; u16 smid ; if ( copy_from_user ( & karg , arg , sizeof ( karg ) ) )  if ( _ctl_verify_adapter ( karg . hdr . ioc_number , & ioc ) == - 1 || ! ioc )  buffer_type = karg . unique_id & 0x000000ff; if ( ! _ctl_diag_capability ( ioc , buffer_type ) )  if ( karg . unique_id != ioc -> unique_id [ buffer_type ] )  request_data = ioc -> diag_buffer [ buffer_type ]; if ( ! request_data )  if ( ( karg . starting_offset % 4 ) || ( karg . bytes_to_read % 4 ) )  diag_data = ( void * ) ( request_data + karg . starting_offset ); if ( copy_to_user ( ( void __user * ) uarg -> diagnostic_data , diag_data , karg . bytes_to_read ) )  if ( ( karg . flags & MPT2_FLAGS_REREGISTER ) == 0 )  if ( ( ioc -> diag_buffer_status [ buffer_type ] & MPT2_DIAG_BUFFER_IS_RELEASED ) == 0 )  if ( state == NON_BLOCKING && ! mutex_trylock ( & ioc -> ctl_cmds . mutex ) )  if ( mutex_lock_interruptible ( & ioc -> ctl_cmds . mutex ) )  if ( ioc -> ctl_cmds . status != MPT2_CMD_NOT_USED )  smid = mpt2sas_base_get_smid ( ioc , ioc -> ctl_cb_idx ); if ( ! smid )  ioc -> ctl_cmds . status = MPT2_CMD_PENDING; memset ( ioc -> ctl_cmds . reply , 0 , ioc -> reply_sz ); ioc -> ctl_cmds . smid = smid; mpi_request -> BufferLength = cpu_to_le32 ( ioc -> diag_buffer_sz [ buffer_type ] ); mpi_request -> BufferAddress = cpu_to_le64 ( ioc -> diag_buffer_dma [ buffer_type ] ); mpi_request -> ProductSpecific [ i ] = cpu_to_le32 ( ioc -> product_specific [ buffer_type ] [ i ] ); mpi_request -> VF_ID = 0; mpi_request -> VP_ID = 0; mpt2sas_base_put_smid_default ( ioc , smid ); init_completion ( & ioc -> ctl_cmds . done ); timeleft = wait_for_completion_timeout ( & ioc -> ctl_cmds . done , MPT2_IOCTL_DEFAULT_TIMEOUT * HZ ); if ( ! ( ioc -> ctl_cmds . status & MPT2_CMD_COMPLETE ) )  printk ( MPT2SAS_ERR_FMT "%s: timeout\n" , ioc -> name __func__ ) _debug_dump_mf ( mpi_request , sizeof ( Mpi2DiagBufferPostRequest_t ) / 4 ); if ( ! ( ioc -> ctl_cmds . status & MPT2_CMD_RESET ) )  if ( ( ioc -> ctl_cmds . status & MPT2_CMD_REPLY_VALID ) == 0 )  printk ( MPT2SAS_ERR_FMT "%s: no reply message\n" ioc -> name , __func__ ) mpi_reply = ioc -> ctl_cmds . reply; ioc_status = le16_to_cpu ( mpi_reply -> IOCStatus ) & MPI2_IOCSTATUS_MASK; if ( ioc_status == MPI2_IOCSTATUS_SUCCESS )  ioc -> diag_buffer_status [ buffer_type ] |= MPT2_DIAG_BUFFER_IS_REGISTERED; dctlprintk ( ioc , printk ( MPT2SAS_INFO_FMT "%s: success\n" ioc -> name , __func__ ) ) printk ( MPT2SAS_INFO_FMT "%s: ioc_status(0x%04x) "log_info(0x%08x)\n" , ioc -> name , __func__ ioc_status , le32_to_cpu ( mpi_reply -> IOCLogInfo ) ) mpt2sas_base_hard_reset_handler ( ioc , CAN_SLEEP , FORCE_BIG_HAMMER ); ioc -> ctl_cmds . status = MPT2_CMD_NOT_USED; mutex_unlock ( & ioc -> ctl_cmds . mutex ); 