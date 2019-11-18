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
 * JWM      11/17/19     Creation                                                *
 * FML		MM/DD/YY	One-line description									*
 *----------------------------------------------------------------------------- */

/*
 * This Class should take in the JSON data, and add it to a boost graph that the slicer can utilize
 */

#include <jsoncpp/json/json.h>

#ifndef CS220SYNTH_JSON_IN_H
#define CS220SYNTH_JSON_IN_H

class JSON_IN {
protected:
    int test;
public:
    //After Parsing the data is stored here
    Json::Value root;
    JSON_IN();
    void parse_data();
    virtual ~JSON_IN();


};

#endif //CS220SYNTH_JSON_IN_H
