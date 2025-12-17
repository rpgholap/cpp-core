/*
 * main.cpp
 *
 *  Created on: 03-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>
#include <string>

class Student{
	int rollNo;
	std::string name;

public:
	int getRollNo(){
		return rollNo;
	}

	std::string getName(){
		return name;
	}

	void setRollNo(int rollNo){
		this->rollNo = rollNo;
	}

	void setName(std::string name){
		this->name = name;
	}

};

int main(){
	using namespace std;

	Student s1;  // this is on stack
				 // new -> it will be on heap
	s1.setRollNo(10);
	s1.setName("shil");

	cout << "Roll No : " << s1.getRollNo() << endl;
	cout << "Name : " << s1.getName() << endl;

	return 0;
}
