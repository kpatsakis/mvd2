void isa_ide_init(int iobase, int iobase2, qemu_irq BlockDriverState *hd0, BlockDriverState *hd1) IDEState * ide_state ; ide_state = qemu_mallocz ( sizeof ( IDEState ) * 2 ); ide_init2 ( ide_state , hd0 , hd1 , irq ); static void ide_init2(IDEState BlockDriverState *hd0, BlockDriverState qemu_irq irq) IDEState * s ; static int drive_serial = 1 ; int i , cylinders , heads , secs ; uint64_t nb_sectors ; for(i = 0; i < 2; i++) s = ide_state + i; s -> io_buffer = qemu_memalign ( 512 , IDE_DMA_BUF_SECTORS * 512 + 4 ); if ( i == 0 )  s -> bs = hd0; s -> bs = hd1; if ( s -> bs )  s -> cylinders = cylinders; s -> heads = heads; s -> sectors = secs; s -> nb_sectors = nb_sectors; if ( bdrv_get_type_hint ( s -> bs ) == BDRV_TYPE_CDROM )  s -> is_cdrom = 1; s -> drive_serial = drive_serial ++; strncpy ( s -> drive_serial_str , drive_get_serial ( s -> bs ) , sizeof ( s -> drive_serial_str ) ); if ( strlen ( s -> drive_serial_str ) == 0 )  