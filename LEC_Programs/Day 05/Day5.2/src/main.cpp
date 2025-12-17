//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Student{
public:
	int rollNo;
	string name;

	Student(){
		this->name = "";
		this->rollNo = 0;
	}

	Student(int rollNo, string name){ // Initialization
		this->name = name;
		this->rollNo = rollNo;
	}

	void setData(int rollNo, string name){ //Assignment
		this->name = name;
		this->rollNo = rollNo;
	}

};

int main() {

	Student s1;		// Declaration

	Student s2(100,"shil");		//Initialization


	s1.setData(102, "khetesh");	//Assignment

//	Initialization -> Constructor
//	Assignment 	-> Setter functions or Constructor

	int val = 10;	//Initialization -> when we create it -> value assigned

	int val2;		// Declaration -> when create it -> value nothing

	val2 = 20;		//Assignment -> already created variable -> value assigned
}
