 CVE_2014_3640_PATCHED_udp_input(register struct mbuf *m, int iphlen) Slirp * slirp = m -> slirp ; register struct ip * ip register struct udphdr * uh ; int len ; struct socket * so ; if ( iphlen > sizeof ( struct ip ) )  iphlen = sizeof ( struct ip ); ip = mtod ( m , struct ip * ) uh = ( struct udphdr * ) ( ( caddr_t ) ip + iphlen ); len = ntohs ( ( u_int16_t ) uh -> uh_ulen ); if ( ip -> ip_len != len )  if ( len > ip -> ip_len )  ip -> ip_len = len; if ( uh -> uh_sum )  ( ( struct ipovly * ) ip ) -> ih_x1 = 0; ( ( struct ipovly * ) ip ) -> ih_len = uh -> uh_ulen; if ( cksum ( m , len + sizeof ( struct ip ) ) )  if ( ntohs ( uh -> uh_dport ) == BOOTP_SERVER )  if ( slirp -> restricted )  if ( ntohs ( uh -> uh_dport ) == TFTP_SERVER )  so = slirp -> udp_last_so; if ( so == & slirp -> udb || so -> so_lport != uh -> uh_sport || so -> so_laddr . s_addr != ip -> ip_src . s_addr )  struct socket * tmp ; for (tmp = slirp->udb.so_next; tmp != tmp = tmp->so_next) if ( tmp -> so_lport == uh -> uh_sport && tmp -> so_laddr . s_addr == ip -> ip_src . s_addr )  so = tmp; if ( tmp == & slirp -> udb )  so = NULL; slirp -> udp_last_so = so; if ( so == NULL )  so = socreate ( slirp ); if ( ! so )  if ( udp_attach ( so ) == - 1 )  so -> so_laddr = ip -> ip_src; so -> so_lport = uh -> uh_sport; if ( ( so -> so_iptos = udp_tos ( so ) ) == 0 )  so -> so_iptos = ip -> ip_tos; so -> so_faddr = ip -> ip_dst; so -> so_fport = uh -> uh_dport; iphlen += sizeof ( struct udphdr ); m -> m_len -= iphlen; m -> m_data += iphlen; if ( sosendto ( so , m ) == - 1 )  m -> m_len += iphlen; m -> m_data -= iphlen; icmp_error ( m , ICMP_UNREACH , ICMP_UNREACH_NET , 0 , strerror ( errno ) ); 