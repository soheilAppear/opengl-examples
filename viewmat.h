/* Copyright (c) 2014 Scott Kuhl. All rights reserved.
 * License: This code is licensed under a 3-clause BSD license. See
 * the file named "LICENSE" for a full copy of the license.
 */

/** @file

    viewmat provides an easy-to-use interface for generating
    appropriate view matrices for a variety of systems. Simply call
    viewmat_init() when your program starts and th en call
    viewmat_get() whenever you want to get a view matrix.

    viewmat handles the details of talking with a VRPN server for IVS
    and HMD systems. If you are running in a DGR environment, it also
    makes sure that the view matrices are synchronized across all DGR
    processes.

    VIEWMAT_MODE="mouse" - Can be set to ivs, hmd, none, mouse. If not
    set, "mouse" is assumed.

    VIEWMAT_VRPN_OBJECT="Head" - The name of the tracked object that
    will be placed on the user's head. Currently only used in "ivs"
    mode.

    @author Scott Kuhl
 */

#ifndef __VIEWMAT_H__
#define __VIEWMAT_H__
#ifdef __cplusplus
extern "C" {
#endif


void viewmat_init(float pos[3], float look[3], float up[3]);
void viewmat_get(float viewmatrix[16], float frustum[6], int viewportNum);
int viewmat_num_viewports();
void viewmat_get_viewport(int viewportValue[4], int viewportNum);

#ifdef __cplusplus
} // end extern "C"
#endif
#endif // end __VIEWMAT_H__
