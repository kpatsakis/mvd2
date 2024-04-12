static void vhost_scsi_complete_cmd_work(struct vhost_work *work) struct vhost_scsi * vs = container_of ( work , struct vhost_scsi vs_completion_work ) struct virtio_scsi_cmd_resp v_rsp ; struct tcm_vhost_cmd * cmd ; struct llist_node * llnode ; struct se_cmd * se_cmd ; llnode = llist_del_all ( & vs -> vs_completion_list ); while ( llnode )  cmd = llist_entry ( llnode , struct tcm_vhost_cmd tvc_completion_list ) llnode = llist_next ( llnode ); se_cmd = & cmd -> tvc_se_cmd; memset ( & v_rsp , 0 , sizeof ( v_rsp ) ); v_rsp . resid = cpu_to_vhost32 ( cmd -> tvc_vq , se_cmd -> residual_count ); v_rsp . status = se_cmd -> scsi_status; v_rsp . sense_len = cpu_to_vhost32 ( cmd -> tvc_vq , se_cmd -> scsi_sense_length ); memcpy ( v_rsp . sense , cmd -> tvc_sense_buf , se_cmd -> scsi_sense_length ); ret = copy_to_user ( cmd -> tvc_resp , & v_rsp , sizeof ( v_rsp ) ); if ( likely ( ret == 0 ) )  