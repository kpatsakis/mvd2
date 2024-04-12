static void xhci_runtime_write(void *ptr, hwaddr uint64_t val, unsigned size) XHCIState * xhci = ptr ; int v = ( reg - 0x20 ) / 0x20 ; if ( reg < 0x20 )  switch ( reg & 0x1f )  xhci_events_update ( xhci , v ); static void xhci_events_update(XHCIState *xhci, int v) XHCIInterrupter * intr = & xhci -> intr [ v ] ; dma_addr_t erdp ; unsigned int dp_idx ; if ( xhci -> usbsts & USBSTS_HCH )  erdp = xhci_addr64 ( intr -> erdp_low , intr -> erdp_high ); static inline dma_addr_t xhci_addr64(uint32_t low, uint32_t high) if ( sizeof ( dma_addr_t ) == 4 )  return low ; return low | ( ( ( dma_addr_t ) high << 16 ) << 16 ) ; if ( erdp < intr -> er_start || erdp >= ( intr -> er_start + TRB_SIZE * intr -> er_size ) )  dp_idx = ( erdp - intr -> er_start ) / TRB_SIZE; assert ( dp_idx < intr -> er_size ); 