/*
 * main.cpp
 *
 *  Created on: 05-Dec-2025
 *      Author: Shilbhushan
 */


#include <iostream>
using namespace std;


int main(){

	int val = 10;

	int &ref = val;  // this is your reference variable -> just an alias val variable -> nickename
					// it doesnt acquire -> memory space
	int val1 = 20;

//	int &ref1;	//error: 'ref1' declared as reference but not initialized

//	int &ref1 = NULL; // error: invalid initialization of
					 // non-const reference of type 'int&' from an rvalue of type 'int'

	ref = val1; // changes -> that will reflected in the main value

	cout << val << endl;
	cout << ref << endl;

	return 0;
}
