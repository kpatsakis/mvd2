void cpu_physical_memory_unmap(void *buffer, hwaddr int is_write, hwaddr access_len) return address_space_unmap ( & address_space_memory , buffer , len , is_write , access_len ) ; void address_space_unmap(AddressSpace *as, void *buffer, hwaddr int is_write, hwaddr access_len) if ( buffer != bounce . buffer )  if ( is_write )  address_space_write ( as , bounce . addr , bounce . buffer , access_len ); bool address_space_write(AddressSpace *as, hwaddr const uint8_t *buf, int len) return address_space_rw ( as , addr , ( uint8_t * ) buf , len , true ) ; bool address_space_rw(AddressSpace *as, hwaddr addr, uint8_t int len, bool is_write) hwaddr l ; uint8_t * ptr ; hwaddr addr1 ; MemoryRegion * mr ; while ( len > 0 )  l = len; mr = address_space_translate ( as , addr , & addr1 , & l , is_write ); if ( is_write )  if ( ! memory_access_is_direct ( mr , is_write ) )  l = memory_access_size ( mr , l , addr1 ); val = ldq_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 8 ); val = ldl_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 4 ); val = lduw_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 2 ); val = ldub_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 1 ); addr1 += memory_region_get_ram_addr ( mr ); memcpy ( ptr , buf , l ); if ( ! memory_access_is_direct ( mr , is_write ) )  l = memory_access_size ( mr , l , addr1 ); error |= io_mem_read ( mr , addr1 , & val , 8 ); stq_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 4 ); stl_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 2 ); stw_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 1 ); stb_p ( buf , val ); ptr = qemu_get_ram_ptr ( mr -> ram_addr + addr1 ); memcpy ( buf , ptr , l ); len -= l; buf += l; addr += l; return error ; 