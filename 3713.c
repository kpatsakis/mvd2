static translate_table(struct net *net, struct xt_table_info *newinfo, void const struct ipt_replace *repl) struct ipt_entry * iter ; unsigned int i ; newinfo -> size = repl -> size; newinfo -> number = repl -> num_entries; for (i = 0; i < NF_INET_NUMHOOKS; i++) newinfo -> hook_entry [ i ] = 0xFFFFFFFF; newinfo -> underflow [ i ] = 0xFFFFFFFF; ret = check_entry_size_and_hooks ( iter , newinfo , entry0 , entry0 + repl -> size , repl -> hook_entry , repl -> underflow , repl -> valid_hooks ); static check_entry_size_and_hooks(struct ipt_entry struct xt_table_info const unsigned char const unsigned char const unsigned int const unsigned int unsigned int valid_hooks) unsigned int h ; if ( e -> next_offset < sizeof ( struct ipt_entry ) + sizeof ( struct xt_entry_target ) )  for (h = 0; h < NF_INET_NUMHOOKS; h++) if ( ! ( valid_hooks & ( 1 << h ) ) )  if ( ( unsigned char * ) e - base == hook_entries [ h ] )  newinfo -> hook_entry [ h ] = hook_entries [ h ]; if ( ( unsigned char * ) e - base == underflows [ h ] )  if ( ! check_underflow ( e ) )  newinfo -> underflow [ h ] = underflows [ h ]; static bool check_underflow(const struct ipt_entry *e) if ( ! unconditional ( & e -> ip ) )  static inline bool unconditional(const struct ipt_ip *ip) static const struct ipt_ip uncond ; return memcmp ( ip , & uncond , sizeof ( uncond ) ) == 0 ; 