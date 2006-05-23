extern ATermTable SSL_table_table ;

ATerm SSL_hashtable_create(ATerm, ATerm) ;
ATerm SSL_hashtable_destroy(ATerm) ;
ATerm SSL_hashtable_reset(ATerm) ;
ATerm SSL_hashtable_put(ATerm, ATerm, ATerm) ;
ATerm SSL_hashtable_get(ATerm, ATerm) ;
ATerm SSL_hashtable_remove(ATerm, ATerm) ;
ATerm SSL_hashtable_keys(ATerm) ;
ATerm SSL_table_hashtable() ;
