/*
 * globals.h
 *
 *  Created on: May 30, 2016
 *      Author: quentinn.r.roby
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_


const int gMonthsInYear = 12;
const int gPercentDemoninator =100;

struct gAmortizeMonth
{
	int year;
	int yearMonth;
	long loanMonth;
	double payment;
	double pureInterest;
	double paidDownPrinicipal;
	double principalBalance;
};


#endif /* GLOBALS_H_ */
