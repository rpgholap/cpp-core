/*
 * main.cpp
 *
 *  Created on: 03-Dec-2025
 *      Author: Shilbhushan
 */
//#include <iostream>   // standard -> check include standard directory
//#include "student.h"  // our own file -> student.h  -> " " use to include my user defined file
//not valid
//#include <student.h>  // error: student.h: No such file or directory -> because it tries to find this in std directory

//src -> main.cpp -> student.h include krna hai -> #include "student/student.h"
//src -> /student
//		- student.h
//		- student.cpp

//import java.util.Array; // in java

//Modularity

#include <iostream>
#include "student.h" // int val is defined here

using namespace std;

//int val = 10; //redefinition of 'int val'

//namespace -> keyword

//namespace hello{
//
//}

//namespace _nameForNamespcae{}
//c++ library -> my

//namespace my{
//	int val;
//}

// int val;

//namespace frnd{
//	int val;
//}

//c++ library -> friend
// int val;



void display(int val, int lav){ //function prototype scope

}


int val = 10; // different

int main1(){

//	auto int val = 10; //auto is by default present
//	register int val = 10; // register
//	static int val = 10;
	return 0;
}



int main(){

	int val = 100;

	cout << val << endl;
	cout << ::val << endl;
	cout << my::val << endl;
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
