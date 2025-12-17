//============================================================================
// Name        : main.cpp
// Author      : shil

//============================================================================

#include <iostream>
using namespace std;

class Student{
public:
	int rollNo;  //data member
	string name;

// const Student *const this		// cannot change the data as well-> cannot point to another object
	int getRollNo() const { 		//getter function
//		rollNo = 20;				// error: assignment of member 'Student::rollNo' in read-only object
		return rollNo;
	}

//	Student *const this			// no change in address -> cannot point to another object
	const void printRecord(){			//it should only print the record
		this->rollNo = 20;
		cout << rollNo << endl;
	} // this function will return a const value
};


int main() {
	int val = 10;

	Student s1;

	s1.rollNo = val;

//	printRecord(&s1);
	s1.printRecord();

	return 0;
}
