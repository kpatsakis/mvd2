static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  nsIFrame * outOfFlowFrame = nsPlaceholderFrame :: GetRealFrameForPlaceholder ( child ) ; VerifyStyleTree ( aPresContext , outOfFlowFrame , nullptr ); while ( outOfFlowFrame = outOfFlowFrame -> GetNextContinuation ( ) )  static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  VerifyContextParent ( aPresContext , child , nullptr , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); nsStyleContext * childStyleIfVisited = aContext -> GetStyleIfVisited ( ) ; if ( childStyleIfVisited && ! ( ( childStyleIfVisited -> RuleNode ( ) != aContext -> RuleNode ( ) && childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) ) || childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) -> GetStyleIfVisited ( ) ) )  DumpContext ( aFrame , aContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  fprintf ( stdout , " (%p)" , static_cast < void * > ( aFrame ) ) if ( aContext )  fprintf ( stdout , " style: %p " , static_cast < void * > ( aContext ) ) nsIAtom * pseudoTag = aContext -> GetPseudo ( ) ; if ( pseudoTag )  nsAutoString buffer ; fputs ( NS_LossyConvertUTF16toASCII ( buffer ) . get ( ) , stdout ); 