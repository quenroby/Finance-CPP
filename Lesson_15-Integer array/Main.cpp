/*
 * Main.cpp
 *
 *  Created on: Jun 13, 2016
 *      Author: quentinn.r.roby
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){

	const int sizeFive = 5;
	int aInt1[sizeFive];

	int i = 0;

	aInt1[i++] = 1000;
	aInt1[i++] = 1001;
	aInt1[i++] = 1002;
	aInt1[i++] = 1003;
	aInt1[i++] = 1004;

	for(int iCount = 0; iCount < sizeFive; iCount++){

		cout <<
				"aInt1[" << iCount << "]" <<
				aInt1[iCount] << endl;


	}

	cout << "aInt1[6]: " << aInt1[6] << endl;

	return 0;
}


