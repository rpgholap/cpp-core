#include <iostream>

using namespace std;

class Student{
	const int rollNo; // const
	string name;

public:
	//default cons
	Student() : rollNo(0), name(""){

	}

	//parameterized cons
	Student(int rollNo, string name) : rollNo(rollNo), name(name){ // initiliaze -> initializer list
						//assignment
	}

	void printData(){
		cout << name << endl;
		cout << rollNo << endl;
	}
};

int main(){

	Student s1(20,"shil"); //not initialization

	Student s2(30, "ram");

//	with the help of initializer list we do initialization

	s1.printData();
	s2.printData();

//s1 -> memory allocate -> add values to it


	return 0;
}
