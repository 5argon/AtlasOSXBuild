#ifndef ATL_zGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,120,240,540,1080,2220
 * N : 25,120,240,540,1080,2220
 * NB : 9,60,60,60,60,120
 */
#define ATL_zGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 72) (nb_) = 9; \
   else if ((n_) < 1650) (nb_) = 60; \
   else (nb_) = 120; \
}


#endif    /* end ifndef ATL_zGetNB_geqrf */
