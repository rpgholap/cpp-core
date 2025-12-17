//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Student{
	int rollNo;
	string name;

//member function this pointer
public:
	//default cons + delegate cons
	Student() : Student(rollNo){
		cout << "default cons" << endl;
		this->rollNo = 0;
		this->name = "";
	}

	//parameterized cons
	Student(int rollNo, string name){
		cout << "para cons" << endl;
		this->rollNo = rollNo;
		this->name = name;
	}

	//delegating cons from default
	Student(int rollNo){
		this->rollNo = rollNo;
	}

	//copy cons
	Student(const Student &stud){
		cout << "copy cons" << endl;
		this->rollNo = stud.rollNo;
		this->name = stud.name;
	}

	//move cons
	Student(Student &&stud){
		cout << "move cons" << endl;
		this->rollNo = stud.rollNo;
		this->name = stud.name;
	}

};


int main(){

	Student s1; //calls default cons

	Student *s2 = new Student(100, "shil"); // parameterized cons

	Student s3 = s1; //copy cons = assigment -> operator overload

	Student s4 = move(s3);  // != delete

	return 0;
}








int main1() {

	Student s1;						// Object on Stack
	Student *s2 = new Student(101, "shil");		//Object on Heap

	Student *s3 = (Student*) malloc(sizeof(Student)); //-> to return void*

//	new, delete -> both are keywords only

//	malloc(), free() -> both are functions

	free(s3);

	delete s2;

	return 0;
}
