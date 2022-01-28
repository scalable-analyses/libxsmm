/******************************************************************************
* Copyright (c) Intel Corporation - All rights reserved.                      *
* This file is part of the LIBXSMM library.                                   *
*                                                                             *
* For information on the license, see the LICENSE file.                       *
* Further information: https://github.com/libxsmm/libxsmm/                    *
* SPDX-License-Identifier: BSD-3-Clause                                       *
******************************************************************************/
/* Alexander Heinecke (Intel Corp.)
******************************************************************************/
#ifndef LIBXSMM_DNN_FUSEDGROUPNORM_BACKWARD_H
#define LIBXSMM_DNN_FUSEDGROUPNORM_BACKWARD_H

#include <libxsmm_dnn_fusedgroupnorm.h>

LIBXSMM_API_INTERN libxsmm_dnn_err_t libxsmm_dnn_fusedgroupnorm_st_bwd_custom(libxsmm_dnn_fusedgroupnorm* handle, int start_thread, int tid);

LIBXSMM_API_INTERN libxsmm_dnn_err_t libxsmm_dnn_fusedgroupnorm_st_bwd_nhwc(libxsmm_dnn_fusedgroupnorm* handle, int start_thread, int tid);

LIBXSMM_API_INTERN libxsmm_dnn_err_t libxsmm_dnn_fusedgroupnorm_reduce_stats_st_bwd_custom(libxsmm_dnn_fusedgroupnorm** handles, int num_handles, int start_thread, int tid);

#endif /* LIBXSMM_DNN_FUSEDGROUPNORM_BACKWARD_H */
