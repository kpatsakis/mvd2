 RestyleManager::ReparentStyleContext(nsIFrame* aFrame) nsStyleContext * oldContext = aFrame -> StyleContext ( ) ; nsRefPtr < nsStyleContext > newContext ; nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; bool isChild = providerFrame && providerFrame -> GetParent ( ) == aFrame ; nsStyleContext * newParentContext = nullptr ; if ( isChild )  newParentContext = providerFrame -> StyleContext ( ); if ( providerFrame )  newParentContext = providerFrame -> StyleContext ( ); nsIFrame * prevContinuation = GetPrevContinuationWithPossiblySameStyle ( aFrame ) ; nsStyleContext * prevContinuationContext ; bool copyFromContinuation = prevContinuation && ( prevContinuationContext = prevContinuation -> StyleContext ( ) ) -> GetPseudo ( ) == oldContext -> GetPseudo ( ) && prevContinuationContext -> GetParent ( ) == newParentContext ; if ( copyFromContinuation )  newContext = prevContinuationContext; nsIFrame * parentFrame = aFrame -> GetParent ( ) ; Element * element = ElementForStyleContext ( parentFrame ? parentFrame -> GetContent ( ) : nullptr , aFrame , oldContext -> GetPseudoType ( ) ) ; nsIContent * pseudoElementContent = aFrame -> GetContent ( ) ; Element * pseudoElement = ( pseudoElementContent && pseudoElementContent -> IsElement ( ) ) ? pseudoElementContent -> AsElement ( ) : nullptr ; newContext = mPresContext -> StyleSet ( ) -> ReparentStyleContext ( oldContext , newParentContext , element , pseudoElement ); if ( newContext )  if ( newContext != oldContext )  VerifyStyleTree ( mPresContext , aFrame , newParentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; int32_t contextIndex = 0 ; for (nsStyleContext* (extraContext = ++contextIndex) VerifyContextParent ( aPresContext , aFrame , extraContext , context ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); nsStyleContext * childStyleIfVisited = aContext -> GetStyleIfVisited ( ) ; if ( childStyleIfVisited && ! ( ( childStyleIfVisited -> RuleNode ( ) != aContext -> RuleNode ( ) && childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) ) || childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) -> GetStyleIfVisited ( ) ) )  DumpContext ( aFrame , aContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  nsAutoString name ; fputs ( NS_LossyConvertUTF16toASCII ( name ) . get ( ) , stdout ); 