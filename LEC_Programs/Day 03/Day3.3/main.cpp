/*
 * main.cpp
 *
 *  Created on: 03-Dec-2025
 *      Author: Shilbhushan
 */


#include <iostream>

using namespace std;

class Student{

public:
	int rollNo;
	string name;

	void setData(){

		//c style
//		printf("Enter name: ");
//		scanf("%s", name);

		//C++ style
		cout << "Enter Roll No: " << endl; //'\n' \t %.2f endl setw, scientific, hex, dec, etc.
		cin >> rollNo;

		if(rollNo == 0){
			cerr << "Roll No. cannot be zero" << endl;
		}

		clog << "Roll No entered success" << endl;

		cout << "Enter Name :" << endl;
		cin >> name;

		clog << "Name entered success" << endl;
	}


	void printData(){

//		printf("Roll No : %d, Name : %s", rollNo, name);

		cout << "Student Details" <<endl;
		cout << "Roll No : " << rollNo << endl;
		cout << "Name : " << name << endl;
	}
};


int main(){

	Student s1;

	s1.setData();
	s1.printData();

	return 0;
}






















//#include <iostream>
//
//using namespace std;
//
//// Employee class with data member
//class Employee{
//	//data members
//	int id; //attributes, instance variable
//
//public:
//	//member function -> behavoiur
//
//	void setId(int id){
//		this->id = id;
//	}
//	void print(){
//		cout << id << endl;
//	}
//};
//
//int main(){
//	Employee e1;
//
//	e1.setId(10);
//
//	e1.print();
//
//	return 0;
//}
