//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Student{
	int rollNo;
	string name;
	static int count;	// static data member -> declaration of static variable
public:

	Student(){
		count++;
	}

	//static member function
	static void getCount(){
//		cout << rollNo << " " << name << endl;	 //not valid -> error
		cout << "Static Function -> Total Students : " << count << endl;
	}

	void display(){
		cout << rollNo << " " << name << endl;
		cout << "Non Static Function -> Total Students : " << count << endl;
	}
};

int Student::count = 0;		//definition of static variable

int main() {

	Student s1;
	Student s2;
	Student s3;

//	s1.getCount(); // valid -> but not recommended;

	s1.display();
	Student::getCount(); // valid -> recommended;

	return 0;
}
