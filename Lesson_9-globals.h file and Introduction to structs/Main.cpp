/*
 * Main.cpp
 *
 *  Created on: May 30, 2016
 *      Author: quentinn.r.roby
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"
#include "globals.h"


using namespace std;

int main()
{

	double principal = 0.0;

	cout << "Enter the principal amount: ";
	cin >> principal;

	double humanInterest = 0.0;

	cout << "Enter the interest amount: ";
	cin >> humanInterest;

	double interest = divisor(humanInterest, gPercentDemoninator);

	int yearsOfLoan = 0;

	cout << "Enter the years of loan: ";
	cin >> yearsOfLoan;

	double monthInterest = divisor(interest, gMonthsInYear);
	long monthsOfLoan = multiplier(yearsOfLoan, gMonthsInYear);

	double payment = 0.0;

	payment = principal * (monthInterest / (1 - (pow((double)1 + monthInterest, (double)-monthsOfLoan))));

	cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

	double currInterestPayment = 0.0;
	double currPrincipalPayment = 0.0;
	double currBalance = 0.0;

	currBalance = principal;

	long currLoanMonth = 1;

	while(currLoanMonth <= monthsOfLoan){

		gAmortizeMonth amortMonth;

		currInterestPayment = currBalance * monthInterest;
		currPrincipalPayment = payment - currInterestPayment;
		currBalance = currBalance - currPrincipalPayment;

		amortMonth.year = 1;
		amortMonth.yearMonth = 1;
		amortMonth.loanMonth = currLoanMonth;
		amortMonth.payment = payment;
		amortMonth.pureInterest = currInterestPayment;
		amortMonth.paidDownPrinicipal = currPrincipalPayment;
		amortMonth.principalBalance = currBalance;


		cout << "CM: " << amortMonth.loanMonth << " CI: " << amortMonth.pureInterest <<
				" CP: " << amortMonth.paidDownPrinicipal << " Bal: " << amortMonth.principalBalance << endl;

		currLoanMonth++;

	}

	cout << "Loan payment complete." << endl;



	return 0;
}


