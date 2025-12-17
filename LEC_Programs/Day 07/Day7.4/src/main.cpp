//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

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
		cin  >> name;
	}

	void printRecord(){
		cout << rollNo << endl;
		cout << name << endl;
	}

	friend void getStudentDetails(Student &s);		//declare
};

void getStudentDetails(Student &s){			// definition
	cout << s.rollNo << " " << s.name << endl;		// valid
}

int main() {
	Student s1;

	s1.acceptRecord();
	s1.printRecord();

//	cout << s1.rollNo;		// not valid
//	cout << s1.name;			// not valid

	getStudentDetails(s1);

	return 0;
}
