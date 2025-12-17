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

	Student() : rollNo(0), name(""){ //explicit default cons
		cout << "Constructor called!" << endl;
	}

	void acceptRecord(){
		cout << "Enter Roll No: " << endl;
		cin >> rollNo;
		cout << "Enter Name: " << endl;
		cin >> name;
	}

	void printRecord(){
		cout << "Roll No: " << rollNo << " " << "Name : " << name <<  endl;
	}

	~ Student(){  //destructor
		cout << "Destructor called!" << endl;
	}
};


int main(){

//		Student s;
//	Student s_arr[3];  // array of object -> stack
	Student *s_arr1 = new Student[3];	// array of object  -> heap

//	delete[] s_arr1;		// to release the resources on heap -> array of object
//	delete = s;			// for single object

	return 0;
}


