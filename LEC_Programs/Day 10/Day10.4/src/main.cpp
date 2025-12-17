/*
 * main.cpp
 *
 *  Created on: 11-Dec-2025
 *      Author: Shilbhushan
 */
#include <iostream>
using namespace std;

class Person{
public:

	string name;
	int age;
//	Person *this -> it will not be here
	virtual void work(){		// runtime polymorphism -> late binding
		cout << "Person working..." << endl;
	}

	virtual ~ Person(){
		cout << "Person Destructor..." << endl;
	}
//	vtable -> virtual table -> one virtual function
//	vptr -> virtual pointer
	// vptr -> work()
	// vptr -> Person::work()
};

class Student : public Person{
public:
	string courseName;

//	Student *this;
	void work()  {
		cout << "Doing study..." <<endl;
	}
//	vtable -> vptr Student::work()

	~ Student(){
		cout << "Student Destructor..." << endl;
	}
};


int main(){

	Person *p = new Student();	// upcast
	p->work();					// student

	delete p;

	return 0;
}



int main1(){

	//value
	Student s;
	Person p = s;

	//reference
	Student s1;
	Person &p1 = s1;	//implicitly upcasting(person)
	//no runtime polymorphism

	//address
	Student *s2 = new Student();
	Person *p2 = s2;

	s1.work();	// s1::work()
	p1.work();	// p1::work()

	s2->work();	// s1::work()
	p2->work();	// p1::work()

	return 0;
}


