//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

//typedef
typedef class StudentAttendanceReport{
public:
	int rollNo;
	string name;
	//mutable keyword
	mutable int attendanceCount = 0;		//to make this variable mutable, which can change in const member function also

	const StudentAttendanceReport& joined_for_class() const {
		cout << "Roll No: " << rollNo << " "  << "Name: " << name << " " << "is joined." << endl;
		return *this;
	}

	//const member function
	const StudentAttendanceReport& camera_on() const {
		attendanceCount++;
		cout << rollNo << " cam ON." << endl;
		return *this;
	}

	int getAttedanceCount(){
		return attendanceCount;
	}

} SAR; //changed with typedef

int main() {

	SAR s1;

	s1.rollNo = 100;
	s1.name = "shil";

	s1.joined_for_class().camera_on();		// function chaining -> *this

	cout << "Attendace Count: " << s1.getAttedanceCount() << endl; // attendance count
	return 0;
}
