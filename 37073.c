bool joinSwitch(MBasicBlock* switchBlock, const BlockVector& cases, MBasicBlock* defaultBlock) ParseNode * pn = breakableStack_ . popCopy ( ) ; if ( ! switchBlock )  if ( curBlock_ )  MBasicBlock * next ; if ( ! newBlock ( curBlock_ , & next , pn ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; return bindUnlabeledBreaks ( pn ) ; bool bindUnlabeledBreaks(ParseNode* pn) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  if ( curBlock_ )  if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  