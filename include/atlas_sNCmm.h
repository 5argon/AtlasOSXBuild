#ifndef SMM_H
   #define SMM_H

   #define ATL_mmMULADD
   #define ATL_mmLAT 3
   #define ATL_mmMU  3
   #define ATL_mmNU  4
   #define ATL_mmKU  72
   #define MB 76
   #define NB 76
   #define KB 76
   #define NBNB 5776
   #define MBNB 5776
   #define MBKB 5776
   #define NBKB 5776
   #define NB2 152
   #define NBNB2 11552

   #define ATL_MulByNB(N_) ((N_) * 76)
   #define ATL_DivByNB(N_) ((N_) / 76)
   #define ATL_MulByNBNB(N_) ((N_) * 5776)

#endif
