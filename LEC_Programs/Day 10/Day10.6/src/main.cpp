//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;


//class IPerson{		//abstract class
//public:
//	string name;
//	int age;
//
//	virtual void work() = 0; // pure virtual function
//};




class Person{		//abstract class
public:
	string name;
	int age;

	virtual void work() = 0; // pure virtual function

	//allowed
	void details(){
		cout << name << age << endl;
	}

	virtual ~ Person(){
//		cout << "Person Destructor..." << endl;
	}
};

class Student : public Person{
public:
	string courseName;

	void work() override  {
		cout << "Doing study..." <<endl;
	}

	~ Student(){
//		cout << "Student Destructor..." << endl;
	}
};

class Teacher : public Person{
public:
	string subject;

	void work() override {
		cout << "Teaching Students..." <<endl;
	}

	~ Teacher(){
//		cout << "Teacher Destructor..." << endl;
	}
};

int main() {

//	Person p;		// person class object -> not valid :error
	Student s;
	Teacher t;
	Person &p = s;		// abstract class reference -> student class object

//	only references and pointers
//  value -> error
	p.work();
	s.work();
//	s.details();
	t.work();


	return 0;
}
