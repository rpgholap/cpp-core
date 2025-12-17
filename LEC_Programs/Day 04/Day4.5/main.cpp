/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

// valid -> works with all the function call syntax
void add(int a = 10, int b = 10){ // default arguments
	cout << "add function" << endl;
	cout << a << " " << b << endl;
	cout << a+b << endl;
}

// valid -> add(); will not work
void add(int a, int b = 10){ // default arguments
	cout << "add function" << endl;
	cout << a << " " << b << endl;
	cout << a+b << endl;
}


//not valid : Compilation Error
void add(int a = 10, int b){ // default arguments
	cout << "add function" << endl;
	cout << a << " " << b << endl;
	cout << a+b << endl;
}


int main(){

//	add(); 		// compilation error -> arguments are not enough
//	add();		// 20  -> add: error case 2
	add(50);		// 60
	add(80,80);	// 160

//if you want to give default arguments -> right to left
//	if not given it will cause compilation error


	return 0;
}
