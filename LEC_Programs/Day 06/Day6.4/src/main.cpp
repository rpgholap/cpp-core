/*
 * main.cpp
 *
 *  Created on: 06-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>
using namespace std;


class Student{
	int rollNo;
	string name;

public:
	void acceptRecord(){
		cout << "Enter Roll No: " << endl;
		cin >> rollNo;
		cout << "Enter Name: " << endl;
		cin >> name;
	}

	void printRecord(){
		cout << "Roll No: " << rollNo << " " << "Name : " << name <<  endl;
	}

};


int main(){

	Student s_arr[3];  // array of object -> stack
//	Student s_arr1[] = new Student[3];	// array of object  -> heap

	for(int i=0;i<3;i++){
		s_arr[i].acceptRecord();
	}

	cout << "============Student Details============" << endl;

	for(int i=0;i<3;i++){
		s_arr[i].printRecord();
	}

	return 0;
}



