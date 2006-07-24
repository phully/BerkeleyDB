/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef	_db_ext_h_
#define	_db_ext_h_

#if defined(__cplusplus)
extern "C" {
#endif

int __crdel_metasub_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, const DBT *, DB_LSN *));
int __crdel_metasub_read __P((DB_ENV *, void *, __crdel_metasub_args **));
int __crdel_inmem_create_log __P((DB_ENV *, DB_TXN *, DB_LSN *, u_int32_t, int32_t, const DBT *, const DBT *, u_int32_t));
int __crdel_inmem_create_read __P((DB_ENV *, void *, __crdel_inmem_create_args **));
int __crdel_inmem_rename_log __P((DB_ENV *, DB_TXN *, DB_LSN *, u_int32_t, const DBT *, const DBT *, const DBT *));
int __crdel_inmem_rename_read __P((DB_ENV *, void *, __crdel_inmem_rename_args **));
int __crdel_inmem_remove_log __P((DB_ENV *, DB_TXN *, DB_LSN *, u_int32_t, const DBT *, const DBT *));
int __crdel_inmem_remove_read __P((DB_ENV *, void *, __crdel_inmem_remove_args **));
int __crdel_init_recover __P((DB_ENV *, int (***)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), size_t *));
int __crdel_metasub_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_create_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_rename_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_remove_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_init_print __P((DB_ENV *, int (***)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), size_t *));
int __crdel_metasub_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_create_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_rename_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_remove_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_master_open __P((DB *, DB_TXN *, const char *, u_int32_t, int, DB **));
int __db_master_update __P((DB *, DB *, DB_TXN *, const char *, DBTYPE, mu_action, const char *, u_int32_t));
int __db_dbenv_setup __P((DB *, DB_TXN *, const char *, const char *, u_int32_t, u_int32_t));
int __db_dbenv_mpool __P((DB *, const char *, u_int32_t));
int __db_close __P((DB *, DB_TXN *, u_int32_t));
int __db_refresh __P((DB *, DB_TXN *, u_int32_t, int *, int));
int __db_log_page __P((DB *, DB_TXN *, DB_LSN *, db_pgno_t, PAGE *));
int __db_backup_name __P((DB_ENV *, const char *, DB_TXN *, char **));
#ifdef CONFIG_TEST
int __db_testcopy __P((DB_ENV *, DB *, const char *));
#endif
int __db_cursor_int __P((DB *, DB_TXN *, DBTYPE, db_pgno_t, int, u_int32_t, DBC **));
int __db_put __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
int __db_del __P((DB *, DB_TXN *, DBT *, u_int32_t));
int __db_sync __P((DB *));
int __db_associate __P((DB *, DB_TXN *, DB *, int (*)(DB *, const DBT *, const DBT *, DBT *), u_int32_t));
int __db_secondary_close __P((DB *, u_int32_t));
int __db_addrem_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, u_int32_t, db_pgno_t, u_int32_t, u_int32_t, const DBT *, const DBT *, DB_LSN *));
int __db_addrem_read __P((DB_ENV *, void *, __db_addrem_args **));
int __db_big_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, u_int32_t, db_pgno_t, db_pgno_t, db_pgno_t, const DBT *, DB_LSN *, DB_LSN *, DB_LSN *));
int __db_big_read __P((DB_ENV *, void *, __db_big_args **));
int __db_ovref_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, int32_t, DB_LSN *));
int __db_ovref_read __P((DB_ENV *, void *, __db_ovref_args **));
int __db_relink_42_read __P((DB_ENV *, void *, __db_relink_42_args **));
int __db_debug_log __P((DB_ENV *, DB_TXN *, DB_LSN *, u_int32_t, const DBT *, int32_t, const DBT *, const DBT *, u_int32_t));
int __db_debug_read __P((DB_ENV *, void *, __db_debug_args **));
int __db_noop_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, DB_LSN *));
int __db_noop_read __P((DB_ENV *, void *, __db_noop_args **));
int __db_pg_alloc_42_read __P((DB_ENV *, void *, __db_pg_alloc_42_args **));
int __db_pg_alloc_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, DB_LSN *, db_pgno_t, DB_LSN *, db_pgno_t, u_int32_t, db_pgno_t, db_pgno_t));
int __db_pg_alloc_read __P((DB_ENV *, void *, __db_pg_alloc_args **));
int __db_pg_free_42_read __P((DB_ENV *, void *, __db_pg_free_42_args **));
int __db_pg_free_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, DB_LSN *, db_pgno_t, const DBT *, db_pgno_t, db_pgno_t));
int __db_pg_free_read __P((DB_ENV *, void *, __db_pg_free_args **));
int __db_cksum_log __P((DB_ENV *, DB_TXN *, DB_LSN *, u_int32_t));
int __db_cksum_read __P((DB_ENV *, void *, __db_cksum_args **));
int __db_pg_freedata_42_read __P((DB_ENV *, void *, __db_pg_freedata_42_args **));
int __db_pg_freedata_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, DB_LSN *, db_pgno_t, const DBT *, db_pgno_t, db_pgno_t, const DBT *));
int __db_pg_freedata_read __P((DB_ENV *, void *, __db_pg_freedata_args **));
int __db_pg_prepare_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t));
int __db_pg_prepare_read __P((DB_ENV *, void *, __db_pg_prepare_args **));
int __db_pg_new_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, DB_LSN *, db_pgno_t, const DBT *, db_pgno_t));
int __db_pg_new_read __P((DB_ENV *, void *, __db_pg_new_args **));
int __db_pg_init_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, const DBT *, const DBT *));
int __db_pg_init_read __P((DB_ENV *, void *, __db_pg_init_args **));
int __db_pg_sort_log __P((DB *, DB_TXN *, DB_LSN *, u_int32_t, db_pgno_t, DB_LSN *, db_pgno_t, DB_LSN *, db_pgno_t, const DBT *));
int __db_pg_sort_read __P((DB_ENV *, void *, __db_pg_sort_args **));
int __db_init_recover __P((DB_ENV *, int (***)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), size_t *));
int __db_addrem_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_big_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_ovref_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_relink_42_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_debug_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_noop_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_42_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_42_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_cksum_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_42_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_prepare_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_new_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_init_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_sort_print __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_init_print __P((DB_ENV *, int (***)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), size_t *));
int __db_c_close __P((DBC *));
int __db_c_destroy __P((DBC *));
int __db_c_count __P((DBC *, db_recno_t *));
int __db_c_del __P((DBC *, u_int32_t));
int __db_c_dup __P((DBC *, DBC **, u_int32_t));
int __db_c_idup __P((DBC *, DBC **, u_int32_t));
int __db_c_newopd __P((DBC *, db_pgno_t, DBC *, DBC **));
int __db_c_get __P((DBC *, DBT *, DBT *, u_int32_t));
int __db_c_put __P((DBC *, DBT *, DBT *, u_int32_t));
int __db_duperr __P((DB *, u_int32_t));
int __db_c_secondary_get_pp __P((DBC *, DBT *, DBT *, u_int32_t));
int __db_c_pget __P((DBC *, DBT *, DBT *, DBT *, u_int32_t));
int __db_c_del_primary __P((DBC *));
int __db_s_first __P((DB *, DB **));
int __db_s_next __P((DB **));
int __db_s_done __P((DB *));
u_int32_t __db_partsize __P((u_int32_t, DBT *));
int __cdsgroup_begin __P((DB_ENV *, DB_TXN **));
int __db_pgin __P((DB_ENV *, db_pgno_t, void *, DBT *));
int __db_pgout __P((DB_ENV *, db_pgno_t, void *, DBT *));
void __db_metaswap __P((PAGE *));
int __db_byteswap __P((DB_ENV *, DB *, db_pgno_t, PAGE *, size_t, int));
int __db_dispatch __P((DB_ENV *, int (**)__P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *)), size_t, DBT *, DB_LSN *, db_recops, DB_TXNHEAD *));
int __db_add_recovery __P((DB_ENV *, int (***)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), size_t *, int (*)(DB_ENV *, DBT *, DB_LSN *, db_recops, void *), u_int32_t));
int __db_txnlist_init __P((DB_ENV *, u_int32_t, u_int32_t, DB_LSN *, DB_TXNHEAD **));
int __db_txnlist_add __P((DB_ENV *, DB_TXNHEAD *, u_int32_t, u_int32_t, DB_LSN *));
int __db_txnlist_remove __P((DB_ENV *, DB_TXNHEAD *, u_int32_t));
void __db_txnlist_ckp __P((DB_ENV *, DB_TXNHEAD *, DB_LSN *));
void __db_txnlist_end __P((DB_ENV *, DB_TXNHEAD *));
int __db_txnlist_find __P((DB_ENV *, DB_TXNHEAD *, u_int32_t, u_int32_t *));
int __db_txnlist_update __P((DB_ENV *, DB_TXNHEAD *, u_int32_t, u_int32_t, DB_LSN *, u_int32_t *, int));
int __db_txnlist_gen __P((DB_ENV *, DB_TXNHEAD *, int, u_int32_t, u_int32_t));
int __db_txnlist_lsnadd __P((DB_ENV *, DB_TXNHEAD *, DB_LSN *));
int __db_txnlist_lsnget __P((DB_ENV *, DB_TXNHEAD *, DB_LSN *, u_int32_t));
int __db_txnlist_lsninit __P((DB_ENV *, DB_TXNHEAD *, DB_LSN *));
int __db_add_limbo __P((DB_ENV *, DB_TXNHEAD *, int32_t, db_pgno_t, u_int32_t));
int __db_do_the_limbo __P((DB_ENV *, DB_TXN *, DB_TXN *, DB_TXNHEAD *, db_limbo_state));
void __db_txnlist_print __P((DB_TXNHEAD *));
int __db_ditem __P((DBC *, PAGE *, u_int32_t, u_int32_t));
int __db_pitem __P((DBC *, PAGE *, u_int32_t, u_int32_t, DBT *, DBT *));
int __db_associate_pp __P((DB *, DB_TXN *, DB *, int (*)(DB *, const DBT *, const DBT *, DBT *), u_int32_t));
int __db_close_pp __P((DB *, u_int32_t));
int __db_cursor_pp __P((DB *, DB_TXN *, DBC **, u_int32_t));
int __db_cursor __P((DB *, DB_TXN *, DBC **, u_int32_t));
int __db_del_pp __P((DB *, DB_TXN *, DBT *, u_int32_t));
int __db_fd_pp __P((DB *, int *));
int __db_get_pp __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
int __db_get __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
int __db_join_pp __P((DB *, DBC **, DBC **, u_int32_t));
int __db_key_range_pp __P((DB *, DB_TXN *, DBT *, DB_KEY_RANGE *, u_int32_t));
int __db_open_pp __P((DB *, DB_TXN *, const char *, const char *, DBTYPE, u_int32_t, int));
int __db_pget_pp __P((DB *, DB_TXN *, DBT *, DBT *, DBT *, u_int32_t));
int __db_pget __P((DB *, DB_TXN *, DBT *, DBT *, DBT *, u_int32_t));
int __db_put_pp __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
int __db_compact_pp __P((DB *, DB_TXN *, DBT *, DBT *, DB_COMPACT *, u_int32_t, DBT *));
int __db_sync_pp __P((DB *, u_int32_t));
int __db_c_close_pp __P((DBC *));
int __db_c_count_pp __P((DBC *, db_recno_t *, u_int32_t));
int __db_c_del_pp __P((DBC *, u_int32_t));
int __db_c_dup_pp __P((DBC *, DBC **, u_int32_t));
int __db_c_get_pp __P((DBC *, DBT *, DBT *, u_int32_t));
int __db_secondary_close_pp __P((DB *, u_int32_t));
int __db_c_pget_pp __P((DBC *, DBT *, DBT *, DBT *, u_int32_t));
int __db_c_put_pp __P((DBC *, DBT *, DBT *, u_int32_t));
int __db_txn_auto_init __P((DB_ENV *, DB_TXN **));
int __db_txn_auto_resolve __P((DB_ENV *, DB_TXN *, int, int));
int __dbt_usercopy __P((DB_ENV *, DBT *));
void __dbt_userfree __P((DB_ENV *, DBT *, DBT *, DBT *));
int __db_join __P((DB *, DBC **, DBC **, u_int32_t));
int __db_join_close __P((DBC *));
int __db_secondary_corrupt __P((DB *));
int __db_new __P((DBC *, u_int32_t, PAGE **));
int __db_free __P((DBC *, PAGE *));
#ifdef HAVE_FTRUNCATE
void __db_freelist_pos __P((db_pgno_t, db_pgno_t *, u_int32_t, u_int32_t *));
#endif
#ifdef HAVE_FTRUNCATE
int __db_pg_truncate __P((DB_MPOOLFILE *, DB_TXN *, struct pglist *list, DB_COMPACT *, u_int32_t *, db_pgno_t *, DB_LSN *, int));
#endif
#ifdef HAVE_FTRUNCATE
int __db_free_truncate __P((DB *, DB_TXN *, u_int32_t, DB_COMPACT *, struct pglist **, u_int32_t *, db_pgno_t *));
#endif
int __db_lprint __P((DBC *));
int __db_lget __P((DBC *, int, db_pgno_t, db_lockmode_t, u_int32_t, DB_LOCK *));
int __db_lput __P((DBC *, DB_LOCK *));
int __dbh_am_chk __P((DB *, u_int32_t));
int __db_get_flags __P((DB *, u_int32_t *));
int  __db_set_flags __P((DB *, u_int32_t));
int  __db_get_lorder __P((DB *, int *));
int  __db_set_lorder __P((DB *, int));
int  __db_set_pagesize __P((DB *, u_int32_t));
int __db_open __P((DB *, DB_TXN *, const char *, const char *, DBTYPE, u_int32_t, int, db_pgno_t));
int __db_get_open_flags __P((DB *, u_int32_t *));
int __db_new_file __P((DB *, DB_TXN *, DB_FH *, const char *));
int __db_init_subdb __P((DB *, DB *, const char *, DB_TXN *));
int __db_chk_meta __P((DB_ENV *, DB *, DBMETA *, int));
int __db_meta_setup __P((DB_ENV *, DB *, const char *, DBMETA *, u_int32_t, int));
int __db_goff __P((DB *, DB_TXN *, DBT *, u_int32_t, db_pgno_t, void **, u_int32_t *));
int __db_poff __P((DBC *, const DBT *, db_pgno_t *));
int __db_ovref __P((DBC *, db_pgno_t, int32_t));
int __db_doff __P((DBC *, db_pgno_t));
int __db_moff __P((DB *, DB_TXN *, const DBT *, db_pgno_t, u_int32_t, int (*)(DB *, const DBT *, const DBT *), int *));
int __db_vrfy_overflow __P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t, u_int32_t));
int __db_vrfy_ovfl_structure __P((DB *, VRFY_DBINFO *, db_pgno_t, u_int32_t, u_int32_t));
int __db_safe_goff __P((DB *, VRFY_DBINFO *, db_pgno_t, DBT *, void *, u_int32_t));
void __db_loadme __P((void));
int __db_dumptree __P((DB *, DB_TXN *, char *, char *));
const FN * __db_get_flags_fn __P((void));
int __db_prnpage __P((DB *, DB_TXN *, db_pgno_t));
int __db_prpage __P((DB *, PAGE *, u_int32_t));
void __db_pr __P((DB_ENV *, DB_MSGBUF *, u_int8_t *, u_int32_t));
void __db_prflags __P((DB_ENV *, DB_MSGBUF *, u_int32_t, const FN *, const char *, const char *));
const char * __db_lockmode_to_string __P((db_lockmode_t));
int __db_dumptree __P((DB *, DB_TXN *, char *, char *));
const FN * __db_get_flags_fn __P((void));
int __db_dump_pp __P((DB *, const char *, int (*)(void *, const void *), void *, int, int));
int __db_dump __P((DB *, const char *, int (*)(void *, const void *), void *, int, int));
int __db_prdbt __P((DBT *, int, const char *, void *, int (*)(void *, const void *), int));
int	__db_prheader __P((DB *, const char *, int, int, void *, int (*)(void *, const void *), VRFY_DBINFO *, db_pgno_t));
int __db_prfooter __P((void *, int (*)(void *, const void *)));
int  __db_pr_callback __P((void *, const void *));
const char * __db_dbtype_to_string __P((DBTYPE));
int __db_addrem_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_big_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_ovref_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_debug_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_noop_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_new_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_cksum_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_prepare_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_init_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_sort_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_42_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_42_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_42_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_relink_42_recover __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_traverse_big __P((DB *, db_pgno_t, DB_TXN *, int (*)(DB *, PAGE *, void *, int *), void *));
int __db_reclaim_callback __P((DB *, PAGE *, void *, int *));
int __db_truncate_callback __P((DB *, PAGE *, void *, int *));
int __env_dbremove_pp __P((DB_ENV *, DB_TXN *, const char *, const char *, u_int32_t));
int __db_remove_pp __P((DB *, const char *, const char *, u_int32_t));
int __db_remove __P((DB *, DB_TXN *, const char *, const char *, u_int32_t));
int __db_remove_int __P((DB *, DB_TXN *, const char *, const char *, u_int32_t));
int __db_inmem_remove __P((DB *, DB_TXN *, const char *));
int __env_dbrename_pp __P((DB_ENV *, DB_TXN *, const char *, const char *, const char *, u_int32_t));
int __db_rename_pp __P((DB *, const char *, const char *, const char *, u_int32_t));
int __db_rename __P((DB *, DB_TXN *, const char *, const char *, const char *));
int __db_rename_int __P((DB *, DB_TXN *, const char *, const char *, const char *));
int __db_ret __P((DB *, DB_TXN *, PAGE *, u_int32_t, DBT *, void **, u_int32_t *));
int __db_retcopy __P((DB_ENV *, DBT *, void *, u_int32_t, void **, u_int32_t *));
int __env_fileid_reset_pp __P((DB_ENV *, const char *, u_int32_t));
int __env_lsn_reset_pp __P((DB_ENV *, const char *, u_int32_t));
int __db_stat_pp __P((DB *, DB_TXN *, void *, u_int32_t));
int __db_stat __P((DB *, DB_TXN *, void *, u_int32_t));
int __db_stat_print_pp __P((DB *, u_int32_t));
int __db_stat_print __P((DB *, u_int32_t));
int __db_truncate_pp __P((DB *, DB_TXN *, u_int32_t *, u_int32_t));
int __db_truncate __P((DB *, DB_TXN *, u_int32_t *));
int __db_upgrade_pp __P((DB *, const char *, u_int32_t));
int __db_upgrade __P((DB *, const char *, u_int32_t));
int __db_lastpgno __P((DB *, char *, DB_FH *, db_pgno_t *));
int __db_31_offdup __P((DB *, char *, DB_FH *, int, db_pgno_t *));
int __db_verify_pp __P((DB *, const char *, const char *, FILE *, u_int32_t));
int __db_verify_internal __P((DB *, const char *, const char *, void *, int (*)(void *, const void *), u_int32_t));
int  __db_vrfy_common __P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t, u_int32_t));
int __db_vrfy_datapage __P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t, u_int32_t));
int __db_vrfy_meta __P((DB *, VRFY_DBINFO *, DBMETA *, db_pgno_t, u_int32_t));
void __db_vrfy_struct_feedback __P((DB *, VRFY_DBINFO *));
int __db_salvage __P((DB *, VRFY_DBINFO *, db_pgno_t, PAGE *, void *, int (*)(void *, const void *), u_int32_t));
int __db_vrfy_inpitem __P((DB *, PAGE *, db_pgno_t, u_int32_t, int, u_int32_t, u_int32_t *, u_int32_t *));
int __db_vrfy_duptype __P((DB *, VRFY_DBINFO *, db_pgno_t, u_int32_t));
int __db_salvage_duptree __P((DB *, VRFY_DBINFO *, db_pgno_t, DBT *, void *, int (*)(void *, const void *), u_int32_t));
int __db_vrfy_dbinfo_create __P((DB_ENV *, u_int32_t, VRFY_DBINFO **));
int __db_vrfy_dbinfo_destroy __P((DB_ENV *, VRFY_DBINFO *));
int __db_vrfy_getpageinfo __P((VRFY_DBINFO *, db_pgno_t, VRFY_PAGEINFO **));
int __db_vrfy_putpageinfo __P((DB_ENV *, VRFY_DBINFO *, VRFY_PAGEINFO *));
int __db_vrfy_pgset __P((DB_ENV *, u_int32_t, DB **));
int __db_vrfy_pgset_get __P((DB *, db_pgno_t, int *));
int __db_vrfy_pgset_inc __P((DB *, db_pgno_t));
int __db_vrfy_pgset_next __P((DBC *, db_pgno_t *));
int __db_vrfy_childcursor __P((VRFY_DBINFO *, DBC **));
int __db_vrfy_childput __P((VRFY_DBINFO *, db_pgno_t, VRFY_CHILDINFO *));
int __db_vrfy_ccset __P((DBC *, db_pgno_t, VRFY_CHILDINFO **));
int __db_vrfy_ccnext __P((DBC *, VRFY_CHILDINFO **));
int __db_vrfy_ccclose __P((DBC *));
int  __db_salvage_init __P((VRFY_DBINFO *));
void  __db_salvage_destroy __P((VRFY_DBINFO *));
int __db_salvage_getnext __P((VRFY_DBINFO *, DBC **, db_pgno_t *, u_int32_t *, int));
int __db_salvage_isdone __P((VRFY_DBINFO *, db_pgno_t));
int __db_salvage_markdone __P((VRFY_DBINFO *, db_pgno_t));
int __db_salvage_markneeded __P((VRFY_DBINFO *, db_pgno_t, u_int32_t));
int __db_vrfy_prdbt __P((DBT *, int, const char *, void *, int (*)(void *, const void *), int, VRFY_DBINFO *));

#if defined(__cplusplus)
}
#endif
#endif /* !_db_ext_h_ */
