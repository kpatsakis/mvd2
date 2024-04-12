static compat_do_ipt_get_ctl(struct sock *sk, int cmd, void __user *user, int *len) int ret ; if ( ! ns_capable ( sock_net ( sk ) -> user_ns , CAP_NET_ADMIN ) )  switch ( cmd )  ret = get_info ( sock_net ( sk ) , user , len , 1 ); static int get_info(struct net *net, void __user const int *len, int compat) char name [ XT_TABLE_MAXNAMELEN ] ; struct xt_table * t ; if ( * len != sizeof ( struct ipt_getinfo ) )  if ( copy_from_user ( name , user , sizeof ( name ) ) != 0 )  name [ XT_TABLE_MAXNAMELEN - 1 ] = '\0'; t = try_then_request_module ( xt_find_table_lock ( net , AF_INET , name ) , "iptable_%s" , name ); if ( ! IS_ERR_OR_NULL ( t ) )  struct ipt_getinfo info ; const struct xt_table_info * private = t -> private ; if ( compat )  private = & tmp; memset ( & info , 0 , sizeof ( info ) ); info . valid_hooks = t -> valid_hooks; memcpy ( info . hook_entry , private -> hook_entry , sizeof ( info . hook_entry ) ); memcpy ( info . underflow , private -> underflow , sizeof ( info . underflow ) ); info . num_entries = private -> number; info . size = private -> size; strcpy ( info . name , name ); if ( copy_to_user ( user , & info , * len ) != 0 )  