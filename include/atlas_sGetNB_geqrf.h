#ifndef ATL_sGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,144,216,288,576,1152,2304,4608
 * N : 25,144,216,288,576,1152,2304,4608
 * NB : 5,8,72,72,72,72,72,216
 */
#define ATL_sGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 84) (nb_) = 5; \
   else if ((n_) < 180) (nb_) = 8; \
   else if ((n_) < 3456) (nb_) = 72; \
   else (nb_) = 216; \
}


#endif    /* end ifndef ATL_sGetNB_geqrf */
