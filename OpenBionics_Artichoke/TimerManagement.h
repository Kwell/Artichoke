/*	Open Bionics - Artichoke
*	Author - Olly McBride
*	Date - December 2015
*
*	This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License.
*	To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/.
*
*	Website - http://www.openbionics.com/
*	GitHub - https://github.com/Open-Bionics
*	Email - ollymcbride@openbionics.com
*
*	TimerManagement.h
*
*/

#ifndef _TIMER_MANAGEMENT_H_
#define _TIMER_MANAGEMENT_H_

void timerSetup(void);
void milliSecInterrupt(void);
double customSeconds(void);
bool customDelay(double delVal);

#endif /*_TIMER_MANAGEMENT_H_*/