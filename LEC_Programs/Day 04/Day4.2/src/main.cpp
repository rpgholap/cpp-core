/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

//return_type method_name(diff parameters [data type], sequence){definition} // whole function structure

//method_name(diff parameters [data type], sequence){definition} //function signature


void display(int val, int lav){ //__Z3displayii
	cout << "diplay for int" <<endl;
	cout << val << endl;
}

//overloading
void display(float lav, float val){ //__Z3displayff
	cout << "display for float" <<endl;
	cout << val << endl;
}

//__Z3displayf
int display(float num){ // example for float -> int conversion
	return num;
}


//display(int num) -> strored as display -> c style name
//Name Mangling
//display(int num) -> stored as _Z3displayi -> c++ style name


int main(){

	int a = 10;
	int b = 20;

	float c = 10.5;
	float d = 20.5;

//	__Z3displayii
	display(a,b); // int promote -> it is causing the issue
//	display(10.5, 29.5);  // error -> 'display' is ambiguous'
	display(c,d); // valid -> calls float function

	cout << display(10.5) << endl;

	return 0;
}
