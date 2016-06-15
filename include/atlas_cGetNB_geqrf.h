#ifndef ATL_cGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,160,320,640,1360,2000,2320,2480,2560,2720
 * N : 25,160,320,640,1360,2000,2320,2480,2560,2720
 * NB : 4,80,80,80,80,80,80,160,160,320
 */
#define ATL_cGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 92) (nb_) = 4; \
   else if ((n_) < 2400) (nb_) = 80; \
   else if ((n_) < 2640) (nb_) = 160; \
   else (nb_) = 320; \
}


#endif    /* end ifndef ATL_cGetNB_geqrf */
