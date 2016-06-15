#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,104,208,468,676,936,1872,2340,2548,2652,2704,2808,3796
 * N : 25,104,208,468,676,936,1872,2340,2548,2652,2704,2808,3796
 * NB : 5,52,52,52,52,104,104,104,104,104,260,260,260
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 64) (nb_) = 5; \
   else if ((n_) < 806) (nb_) = 52; \
   else if ((n_) < 2678) (nb_) = 104; \
   else (nb_) = 260; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
