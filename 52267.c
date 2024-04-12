static int skinny_indicate(struct ast_channel *ast, int ind, const void *data, size_t datalen) struct skinny_subchannel * sub = ast -> tech_pvt ; struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; struct skinnysession * s = d -> session ; if ( ! s )  switch ( ind )  setsubstate ( sub , SUBSTATE_PROGRESS ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( ( d -> hookstate == SKINNY_ONHOOK ) && ( ( actualstate == SUBSTATE_OFFHOOK ) || ( actualstate == SUBSTATE_DIALING ) || ( actualstate == SUBSTATE_RINGOUT ) || ( actualstate == SUBSTATE_CONNECTED ) || ( actualstate == SUBSTATE_BUSY ) || ( actualstate == SUBSTATE_CONGESTION ) || ( actualstate == SUBSTATE_PROGRESS ) ) )  d -> hookstate = SKINNY_OFFHOOK; if ( actualstate == sub -> substate )  switch ( actualstate )  l -> activesub = sub; sub -> substate = SUBSTATE_OFFHOOK; if ( sub -> related )  sub -> related -> related = NULL; if ( sub == l -> activesub )  l -> activesub = NULL; sub -> cxmode = SKINNY_CX_RECVONLY; sub -> substate = SUBSTATE_ONHOOK; if ( sub -> rtp )  sub -> rtp = NULL; if ( ast_strlen_zero ( sub -> exten ) || ! ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; sub -> substate = SUBSTATE_DIALING; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS ) )  sub -> substate = SUBSTATE_RINGOUT; if ( d -> hookstate == SKINNY_ONHOOK )  l -> activesub = sub; sub -> substate = SUBSTATE_RINGIN; sub -> substate = SUBSTATE_CALLWAIT; sub -> substate = SUBSTATE_CONNECTED; l -> activesub = sub; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_BUSY; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_CONGESTION; if ( sub -> substate != SUBSTATE_DIALING )  sub -> substate = SUBSTATE_PROGRESS; if ( sub -> substate != SUBSTATE_CONNECTED )  ast_queue_control_data ( sub -> owner , AST_CONTROL_HOLD , S_OR ( l -> mohsuggest , NULL ) , ! ast_strlen_zero ( l -> mohsuggest ) ? strlen ( l -> mohsuggest ) + 1 : 0 ); 