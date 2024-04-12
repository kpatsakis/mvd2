static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_stimulus_message ( req , s ); static int handle_stimulus_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; struct ast_channel * c ; int event ; int instance ; event = letohl ( req -> data . stimulus . stimulus ); instance = letohl ( req -> data . stimulus . stimulusInstance ); sub = find_subchannel_by_instance_reference ( d , d -> lastlineinstance , d -> lastcallreference ); if ( ! sub )  l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  sub = l -> activesub; l = sub -> line; switch ( event )  struct skinny_speeddial * sd ; if ( ! ( sd = find_speeddial_by_instance ( d , instance , 0 ) ) )  if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; handle_callforward_button ( sub , SKINNY_CFWD_NOANSWER ); static int handle_callforward_button(struct skinny_subchannel *sub, int cfwdtype) struct skinny_line * l = sub -> line ; if ( l -> cfwdtype & cfwdtype )  setsubstate ( sub , SUBSTATE_OFFHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; pthread_t t ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( actualstate == sub -> substate )  switch ( actualstate )  l -> activesub = sub; sub -> substate = SUBSTATE_OFFHOOK; if ( sub -> related )  sub -> related -> related = NULL; if ( sub == l -> activesub )  l -> activesub = NULL; sub -> cxmode = SKINNY_CX_RECVONLY; sub -> substate = SUBSTATE_ONHOOK; if ( sub -> rtp )  sub -> rtp = NULL; if ( ast_strlen_zero ( sub -> exten ) || ! ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( ast_pthread_create ( & t , NULL , skinny_newcall , c ) )  ast_log ( LOG_WARNING , "Unable to create new call thread: %s\n" , strerror ( errno ) ); 