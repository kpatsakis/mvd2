 RestyleManager::DebugVerifyStyleTree(nsIFrame* aFrame) if ( aFrame )  nsStyleContext * context = aFrame -> StyleContext ( ) ; nsStyleContext * parentContext = context -> GetParent ( ) ; VerifyStyleTree ( mPresContext , aFrame , parentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; int32_t contextIndex = 0 ; for (nsStyleContext* (extraContext = ++contextIndex) VerifyContextParent ( aPresContext , aFrame , extraContext , context ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); nsStyleContext * childStyleIfVisited = aContext -> GetStyleIfVisited ( ) ; if ( childStyleIfVisited && ! ( ( childStyleIfVisited -> RuleNode ( ) != aContext -> RuleNode ( ) && childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) ) || childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) -> GetStyleIfVisited ( ) ) )  fputs ( "\n" , stdout ); 