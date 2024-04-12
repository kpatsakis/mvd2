void pgstat_vacuum_stat() HTAB * htab ; PgStat_MsgTabpurge msg ; PgStat_MsgFuncpurge f_msg ; PgStat_StatDBEntry * dbentry ; PgStat_StatTabEntry * tabentry ; PgStat_StatFuncEntry * funcentry ; int len ; if ( pgStatSock == - 1 )  htab = pgstat_collect_oids ( 1262 ); while ( ( dbentry = ( ( PgStat_StatDBEntry * ) ( hash_seq_search ( & hstat ) ) ) ) != ( ( void * ) 0 ) )  dbentry = ( ( PgStat_StatDBEntry * ) ( hash_search ( pgStatDBHash , ( ( void * ) ( & MyDatabaseId ) ) , HASH_FIND , ( ( void * ) 0 ) ) ) ); if ( dbentry == ( ( void * ) 0 ) || dbentry -> tables == ( ( void * ) 0 ) )  htab = pgstat_collect_oids ( 1259 ); msg . m_nentries = 0; while ( ( tabentry = ( ( PgStat_StatTabEntry * ) ( hash_seq_search ( & hstat ) ) ) ) != ( ( void * ) 0 ) )  Oid tabid = tabentry -> tableid ; if ( hash_search ( htab , ( ( void * ) ( & tabid ) ) , HASH_FIND , ( ( void * ) 0 ) ) != ( ( void * ) 0 ) )  msg . m_tableid [ msg . m_nentries ++ ] = tabid; if ( msg . m_nentries >= ( 1000 - sizeof ( PgStat_MsgHdr ) - sizeof ( Oid ) - sizeof ( int ) ) / sizeof ( Oid ) )  len = ( ( ( size_t ) ( & ( ( PgStat_MsgTabpurge * ) 0 ) -> m_tableid [ 0 ] ) ) + msg . m_nentries * sizeof ( Oid ) ); msg . m_databaseid = MyDatabaseId; msg . m_nentries = 0; if ( msg . m_nentries > 0 )  len = ( ( ( size_t ) ( & ( ( PgStat_MsgTabpurge * ) 0 ) -> m_tableid [ 0 ] ) ) + msg . m_nentries * sizeof ( Oid ) ); if ( dbentry -> functions != ( ( void * ) 0 ) && hash_get_num_entries ( dbentry -> functions ) > 0 )  htab = pgstat_collect_oids ( 1255 ); static HTAB *pgstat_collect_oids(Oid catalogid) HTAB * htab ; HASHCTL hash_ctl ; hash_ctl . keysize = sizeof ( Oid ); hash_ctl . entrysize = sizeof ( Oid ); hash_ctl . hash = oid_hash; hash_ctl . hcxt = CurrentMemoryContext; htab = hash_create ( "Temporary table of OIDs" , 512 , & hash_ctl , 0x020 | 0x010 | 0x200 ); return htab ; f_msg . m_databaseid = MyDatabaseId; f_msg . m_nentries = 0; while ( ( funcentry = ( ( PgStat_StatFuncEntry * ) ( hash_seq_search ( & hstat ) ) ) ) != ( ( void * ) 0 ) )  Oid funcid = funcentry -> functionid ; if ( hash_search ( htab , ( ( void * ) ( & funcid ) ) , HASH_FIND , ( ( void * ) 0 ) ) != ( ( void * ) 0 ) )  f_msg . m_functionid [ f_msg . m_nentries ++ ] = funcid; if ( f_msg . m_nentries >= ( 1000 - sizeof ( PgStat_MsgHdr ) - sizeof ( Oid ) - sizeof ( int ) ) / sizeof ( Oid ) )  len = ( ( ( size_t ) ( & ( ( PgStat_MsgFuncpurge * ) 0 ) -> m_functionid [ 0 ] ) ) + f_msg . m_nentries * sizeof ( Oid ) ); pgstat_send ( ( & f_msg ) , len ); f_msg . m_nentries = 0; static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  