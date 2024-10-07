/*
 * software_timer.h
 *
 *  Created on: Oct 7, 2024
 *      Author: tungn
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);


void timerRun0();
void timerRun1();
void timerRun2();
#endif /* INC_SOFTWARE_TIMER_H_ */
