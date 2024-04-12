static int atusb_set_hw_addr_filt(struct ieee802154_hw struct ieee802154_hw_addr_filt unsigned long changed) if ( changed & IEEE802154_AFILT_IEEEADDR_CHANGED )  u8 i , addr [ IEEE802154_EXTENDED_ADDR_LEN ] ; memcpy ( addr , & filt -> ieee_addr , IEEE802154_EXTENDED_ADDR_LEN ); atusb_write_reg ( atusb , RG_IEEE_ADDR_0 + i , addr [ i ] ); static int atusb_write_reg(struct atusb *atusb, uint8_t reg, uint8_t value) struct usb_device * usb_dev = atusb -> usb_dev ; dev_dbg ( & usb_dev -> dev , "atusb_write_reg: 0x%02x <- 0x%02x\n" , reg , value ); return atusb_control_msg ( atusb , usb_sndctrlpipe ( usb_dev , 0 ) , ATUSB_REG_WRITE , ATUSB_REQ_TO_DEV , value , reg , NULL , 0 , 1000 ) ; static int atusb_control_msg(struct atusb *atusb, unsigned int __u8 request, __u8 __u16 value, __u16 void *data, __u16 size, int timeout) struct usb_device * usb_dev = atusb -> usb_dev ; if ( atusb -> err )  return atusb -> err ; ret = usb_control_msg ( usb_dev , pipe , request , requesttype , value , index , data , size , timeout ); if ( ret < 0 )  atusb -> err = ret; dev_err ( & usb_dev -> dev , "atusb_control_msg: req 0x%02x val 0x%x idx 0x%x, error %d\n" , request , value , index , ret ); return ret ; 