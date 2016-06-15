#ifndef ATL_stGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,216,432,864,1800,3600,7272
 * N : 25,216,432,864,1800,3600,7272
 * NB : 3,72,72,72,72,72,72
 */
#define ATL_stGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 120) (nb_) = 3; \
   else (nb_) = 72; \
}


#endif    /* end ifndef ATL_stGetNB_geqrf */
