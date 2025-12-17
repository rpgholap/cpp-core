//============================================================================
// Name        : 3.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Person{
public:

	string name;
	int age;
	void work(){
		cout << "Person working..." << endl;
	}
};

class Student : public Person{

public:
	string courseName;

	void work(){
		cout << "Doing study..." <<endl;
	}
};

class Teacher : public Person{
	string subject;
public:
	void work(){
		cout << "Teaching students..." << endl;
	}
};

int main() {

	//upcasting
//	Student s1;				// student
//	Person p1 = (Person)s1;	// person
//	Teacher t1;				//teacher
//	Person p2 = (Person)t1;	// person
//	Student s2 = (Student)t1;	//not valid

	//downcasting
	Person *p1 = new Person();
	Student *s1 = (Student*) p1;
	Teacher t1;

	p1->work();	// person op
	s1->work();	// student op
//	p2.work();	// person op
//	t1.work();	// teacher op


	return 0;
}
