static int handle_hold_button(struct skinny_subchannel *sub) if ( ! sub )  if ( sub -> related )  if ( sub -> substate == SUBSTATE_HOLD )  activatesub ( sub , SUBSTATE_CONNECTED ); static void activatesub(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; if ( sub == l -> activesub )  if ( l -> activesub )  if ( l -> activesub -> substate == SUBSTATE_RINGIN )  if ( l -> activesub -> substate != SUBSTATE_HOLD )  setsubstate ( l -> activesub , SUBSTATE_ONHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  ast_log ( LOG_WARNING , "Cannot set substate to SUBSTATE_HOLD from %s (on call-%d)\n" , substate2str ( sub -> substate ) , sub -> callid ); static char *substate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & substate2str_threadbuf , SUBSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , SUBSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 