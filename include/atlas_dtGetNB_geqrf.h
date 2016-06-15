#ifndef ATL_dtGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,156,260,312,364,728,1092,1300,1352,1404,1456,1508,3016,6032
 * N : 25,156,260,312,364,728,1092,1300,1352,1404,1456,1508,3016,6032
 * NB : 9,52,52,52,76,60,52,52,88,72,52,88,52,52
 */
#define ATL_dtGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 90) (nb_) = 9; \
   else if ((n_) < 338) (nb_) = 52; \
   else if ((n_) < 546) (nb_) = 76; \
   else if ((n_) < 910) (nb_) = 60; \
   else if ((n_) < 1326) (nb_) = 52; \
   else if ((n_) < 1378) (nb_) = 88; \
   else if ((n_) < 1430) (nb_) = 72; \
   else if ((n_) < 1482) (nb_) = 52; \
   else if ((n_) < 2262) (nb_) = 88; \
   else (nb_) = 52; \
}


#endif    /* end ifndef ATL_dtGetNB_geqrf */
