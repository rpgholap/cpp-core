/*
 * main.cpp
 *
 *  Created on: 11-Dec-2025
 *      Author: Shilbhushan
 */
#include <iostream>
#include <typeinfo>
using namespace std;

class Person{
public:
	string name;
	int age;

	virtual void work(){
		cout << "Person working..." << endl;
	}

	virtual ~ Person(){
		cout << "Person Destructor..." << endl;
	}
};

class Student : public Person{
public:
	string courseName;

	void work()  {
		cout << "Doing study..." <<endl;
	}

	~ Student(){
		cout << "Student Destructor..." << endl;
	}
};

void print(char *s){
	cout << s << endl;
}

void printSafe(const char *s){
	print(const_cast<char*>(s));
}

int main(){

//	static_cast -> during compile time
	Person *p = new Person();
	Student *s = static_cast<Student*>(p);
	p->work();
	s->work();		// undefined behavior

//	const_cast -> changes const to non const & vice versa -> c : char* c++ -> const string char*

	printSafe("shil");	// not allowed but compilers can allow it

	return 0;
}


int main2(){

	//downcasting
//	Person *p = new Person(); //valid
//	Student *s = dynamic_cast<Person*>(p);	// safer -> downcasting error : not valid

	Student *s = new Student();
//	Person *p = dynamic_cast<Person*>(p);

	if(Person *p = dynamic_cast<Student*>(s)){
		cout << "in if student -> dynamic cast in person";
	}

//	p->work();
//	s->work();
//
//	cout << typeid(*p).name() << endl;
//	cout << typeid(*s).name() << endl;

//	delete p;
//	delete s;


	return 0;
}



int main1(){

	Person *p = new Student();
	Student *s = new Student();

	cout << typeid(*p).name() << endl;
	cout << typeid(*s).name() << endl;

	if(typeid(*p) == typeid(Student)){
		cout << "equal" << endl;
	}

	return 0;
}

