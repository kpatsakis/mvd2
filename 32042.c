static void usb_xhci_exit(PCIDevice *dev) int i ; XHCIState * xhci = XHCI ( dev ) ; for (i = 0; i < xhci->numslots; i++) xhci_disable_slot ( xhci , i + 1 ); static TRBCCode xhci_disable_slot(XHCIState *xhci, unsigned int slotid) int i ; for (i = 1; i <= 31; i++) if ( xhci -> slots [ slotid - 1 ] . eps [ i - 1 ] )  xhci_disable_ep ( xhci , slotid , i ); static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  xhci_ep_nuke_xfers ( xhci , slotid , epid , 0 ); static int xhci_ep_nuke_xfers(XHCIState *xhci, unsigned int unsigned int epid, TRBCCode report) assert ( epid >= 1 && epid <= 31 ); 