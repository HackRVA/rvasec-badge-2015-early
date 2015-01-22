/* 
 * File:   TouchCalibrate.h
 * Author: morgan
 *
 * Created on January 21, 2015, 8:45 PM
 */

#ifndef TOUCHCALIBRATE_H
#define	TOUCHCALIBRATE_H
#include "../badge15.h"
#include "nokia.h"

void* construct_TouchCalibrate15(struct BadgeState *b_state);

void* TouchCalibrate15(struct BadgeState *b_state);

void* TouchCalibrate15_onEnter(struct BadgeState *b_state);
void* TouchCalibrate15_onExit(struct BadgeState *b_state);


unsigned char TouchCalibrate15_calibrateSide(struct BadgeState *b_state);
unsigned char TouchCalibrate15_calibrateBottom(struct BadgeState *b_state);

#endif	/* TOUCHCALIBRATE_H */

