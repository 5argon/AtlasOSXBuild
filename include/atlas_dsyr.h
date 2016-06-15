/*
 * This file generated on line 432 of /Users/Sargon/Downloads/ATLAS/buildDir/..//tune/blas/ger/r1hgen.c
 */
#ifndef ATLAS_DSYR1_H
   #define ATLAS_DSYR1_H

#include "atlas_dr1.h"

#define ATL_s1U_NU 4

#define ATL_s1L_NU 4

#define ATL_NOBLOCK_S1 1
#define ATL_GetPartS1(A_, lda_, mb_, nb_) { (mb_) = 0; (nb_) = 0; }
#define ATL_MIN_RESTRICTED_M 16
#define ATL_URGERK ATL_dgerk__3
#define ATL_GENGERK ATL_dgerk__3

#define ATL_SYR1U_nu(A_, lda_, x_, y_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0, lda1_ = lda0_+(lda_), lda2_ = lda1_+(lda_), lda3_ = lda2_+(lda_); \
   const TYPE x0_=*(x_), x1_=(x_)[1], x2_=(x_)[2], x3_=(x_)[3]; \
   const TYPE y0_=*(y_), y1_=(y_)[1], y2_=(y_)[2], y3_=(y_)[3]; \
   aa[lda0_+0] += x0_*y0_; \
   aa[lda1_+0] += x0_*y1_; \
   aa[lda1_+1] += x1_*y1_; \
   aa[lda2_+0] += x0_*y2_; \
   aa[lda2_+1] += x1_*y2_; \
   aa[lda2_+2] += x2_*y2_; \
   aa[lda3_+0] += x0_*y3_; \
   aa[lda3_+1] += x1_*y3_; \
   aa[lda3_+2] += x2_*y3_; \
   aa[lda3_+3] += x3_*y3_; \
}
#define ATL_SYR1L_nu(A_, lda_, x_, y_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0, lda1_ = lda0_+(lda_), lda2_ = lda1_+(lda_), lda3_ = lda2_+(lda_); \
   const TYPE x0_=*(x_), x1_=(x_)[1], x2_=(x_)[2], x3_=(x_)[3]; \
   const TYPE y0_=*(y_), y1_=(y_)[1], y2_=(y_)[2], y3_=(y_)[3]; \
   aa[lda0_+0] += x0_*y0_; \
   aa[lda0_+1] += x1_*y0_; \
   aa[lda0_+2] += x2_*y0_; \
   aa[lda0_+3] += x3_*y0_; \
   aa[lda1_+1] += x1_*y1_; \
   aa[lda1_+2] += x2_*y1_; \
   aa[lda1_+3] += x3_*y1_; \
   aa[lda2_+2] += x2_*y2_; \
   aa[lda2_+3] += x3_*y2_; \
   aa[lda3_+3] += x3_*y3_; \
}

#endif
