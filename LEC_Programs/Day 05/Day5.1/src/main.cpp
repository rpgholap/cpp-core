/*
 * main.cpp
 *
 *  Created on: 05-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

//class Student{
//
//public:
//	int rollNo;
//
//	//error: 'this' is unavailable for static member functions
//	static Student& showRollNo(){
//		cout << rollNo << endl;
//		return *this;
//	}
//};


class Math{

	int val;

public:

//	member functions
//	 Math& add(int a, int b){
//		return *this;
//	}
//
//	Math& sub(int a, int b){
//		return *this;
//	}

	Math& increment(){
		++val;
		return *this; //object
	}

	Math& decrement(){
		--val;
		return *this; //object
	}
};

int main(){

	Math m1;


	m1.increment().decrement(); //this -> because achieved
	int a = 10;
	int b = 20;

//	cout << m1.add(10,20).sub(a, b) << endl;

//	cout << m1.sub(10,30);

	return 0;
}


