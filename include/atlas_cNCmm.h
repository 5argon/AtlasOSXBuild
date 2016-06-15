#ifndef CMM_H
   #define CMM_H

   #define ATL_mmMULADD
   #define ATL_mmLAT 3
   #define ATL_mmMU  3
   #define ATL_mmNU  4
   #define ATL_mmKU  80
   #define MB 56
   #define NB 56
   #define KB 56
   #define NBNB 3136
   #define MBNB 3136
   #define MBKB 3136
   #define NBKB 3136
   #define NB2 112
   #define NBNB2 6272

   #define ATL_MulByNB(N_) ((N_) * 56)
   #define ATL_DivByNB(N_) ((N_) / 56)
   #define ATL_MulByNBNB(N_) ((N_) * 3136)

#endif
