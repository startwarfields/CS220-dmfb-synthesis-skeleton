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

#include "scheduler.h"
#include "dag.h"
#include <math.h>
#include <Slicer/slicer.h>
#include "json_in.h"
///////////////////////////////////////////////////////////////////////////////////
// Constructor
///////////////////////////////////////////////////////////////////////////////////
Slicer::Slicer() {


}
///////////////////////////////////////////////////////////////////////////////////
// Deconstructor
///////////////////////////////////////////////////////////////////////////////////
Slicer::~Slicer() {


}
void Slicer::preform_slice(Json::Value &data, bool control_flow, bool recursive_function )
{
    // Initialize JSON Structure in Readable format
    JSON_IN * jimmy = new JSON_IN();
    jimmy->parse_data();
    // Set the Data input to the JSON structure
    data = jimmy->root;

    // WE wa



}
