/*------------------------------------------------------------------------------*
 *                       (c)2016, All Rights Reserved.     						*
 *       ___           ___           ___     									*
 *      /__/\         /  /\         /  /\    									*
 *      \  \:\       /  /:/        /  /::\   									*
 *       \  \:\     /  /:/        /  /:/\:\  									*
 *   ___  \  \:\   /  /:/  ___   /  /:/~/:/        								*
 *  /__/\  \__\:\ /__/:/  /  /\ /__/:/ /:/___     UCR DMFB Synthesis Framework  *
 *  \  \:\ /  /:/ \  \:\ /  /:/ \  \:\/:::::/     www.microfluidics.cs.ucr.edu	*
 *   \  \:\  /:/   \  \:\  /:/   \  \::/~~~~ 									*
 *    \  \:\/:/     \  \:\/:/     \  \:\     									*
 *     \  \::/       \  \::/       \  \:\    									*
 *      \__\/         \__\/         \__\/    									*
 *-----------------------------------------------------------------------------*/
/*---------------------------Implementation Details-----------------------------*
 * Source: slicer.cc															*
 * Original Code Author(s): Jonathan W. Meyer											*
 * Original Completion/Release Date: WIP							*
 *																				*
 * Details: N/A																	*
 *																				*
 * Revision History:															*
 * WHO		WHEN		WHAT													*
 * ---		----		----
 * JWM      9/30/19     Creation                                                *
 * FML		MM/DD/YY	One-line description									*
 *----------------------------------------------------------------------------- */
#ifndef SLICER_H
#define SLICER_H



#include "dmfb_arch.h"
#include <string.h>
#include "structs.h"
#include "claim.h"
#include "enums.h"
#include "pin_mapper.h"
#include "dag.h"
class DmfbArch;
class DAG;

class Slicer {
    protected:
        int test;
    public:
        Slicer();
        virtual ~Slicer();


};

#endif /* SLICER_H */
