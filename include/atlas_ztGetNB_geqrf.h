#ifndef ATL_ztGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,180,300,360,420,660,780,840,900,1320,1800,2700,3120,3600
 * N : 25,180,300,360,420,660,780,840,900,1320,1800,2700,3120,3600
 * NB : 9,60,60,60,64,60,60,60,128,120,180,180,180,192
 */
#define ATL_ztGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 102) (nb_) = 9; \
   else if ((n_) < 390) (nb_) = 60; \
   else if ((n_) < 540) (nb_) = 64; \
   else if ((n_) < 870) (nb_) = 60; \
   else if ((n_) < 1110) (nb_) = 128; \
   else if ((n_) < 1560) (nb_) = 120; \
   else if ((n_) < 3360) (nb_) = 180; \
   else (nb_) = 192; \
}


#endif    /* end ifndef ATL_ztGetNB_geqrf */
