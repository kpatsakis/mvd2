FWCfgState *fw_cfg_init_io(uint32_t iobase) DeviceState * dev ; dev = qdev_create ( NULL , TYPE_FW_CFG_IO ); fw_cfg_init1 ( dev ); static void fw_cfg_init1(DeviceState *dev) FWCfgState * s = FW_CFG ( dev ) ; fw_cfg_add_bytes ( s , FW_CFG_UUID , qemu_uuid , 16 ); void fw_cfg_add_bytes(FWCfgState *s, uint16_t key, void *data, size_t len) fw_cfg_add_bytes_read_callback ( s , key , NULL , NULL , data , len ); static void fw_cfg_add_bytes_read_callback(FWCfgState *s, uint16_t FWCfgReadCallback void void *data, size_t len) key &= FW_CFG_ENTRY_MASK; assert ( key < FW_CFG_MAX_ENTRY && len < UINT32_MAX ); 