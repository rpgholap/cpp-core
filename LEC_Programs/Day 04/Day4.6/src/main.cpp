/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

class Student{
	//data members
	int rollNo;
	string name;

public:
	//member functions
	// Student *const this
	void setData(int rollNo, string name){
		this->rollNo= rollNo;
		this->name= name;
	}

	void printData(){
		cout << "Roll No :" <<rollNo << endl;
		cout <<"Name : " << name << endl;
	}
};


int main(){

	Student s1;

	//for global in c/c++
//	setData(&s1);
//	printData(&s1);

	s1.setData(101,"shil");
	//setData(&s1, remaining_parameters);

	s1.printData();

	 return 0;
}




