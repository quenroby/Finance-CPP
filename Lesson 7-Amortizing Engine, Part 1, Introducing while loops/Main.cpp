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


using namespace std;

int main()
{
	const int monthsInYear = 12;
	const int percentDemoninator =100;

	double principal = 0.0;

	cout << "Enter the principal amount: ";
	cin >> principal;

	double humanInterest = 0.0;

	cout << "Enter the interest amount: ";
	cin >> humanInterest;

	double interest = divisor(humanInterest, percentDemoninator);

	int yearsOfLoan = 0;

	cout << "Enter the years of loan: ";
	cin >> yearsOfLoan;

	double monthInterest = divisor(interest, monthsInYear);
	long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

	double payment = 0.0;

	payment = principal * (monthInterest / (1 - (pow((double)1 + monthInterest, (double)-monthsOfLoan))));

	cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

	double currInterestPayment = 0.0;
	double currPrincipalPayment = 0.0;
	double currBalance = 0.0;

	currBalance = principal;

	long currLoanMonth = 1;

	while(currLoanMonth <= monthsOfLoan){

		cout << "CM: " << currLoanMonth << endl;
		currLoanMonth++;

	}

	cout << "Loan payment complete." << endl;



	return 0;
}


