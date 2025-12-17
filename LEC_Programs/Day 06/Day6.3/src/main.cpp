/*
 * main.cpp
 *
 *  Created on: 06-Dec-2025
 *      Author: Shilbhushan
 */
#include <iostream>
using namespace std;

class Course{
public:
	int course_id;
	string course_name;
};

class Student{

public:
	int rollNo;
	string name;
	Course course;

//	data members -> public, not private
//	explicitely no constructor written
//	Inheritance not allowed -> c++ 11 -> made it possible -> c++17
//	virtual method
//	destructor
};

class A{
public:
	int x;
};

class B : public A{  //inheritance
public:
	int y;
	B(int x, int y) : A{x}, y{y} {
	}
};


int main(){

	int arr[] = {10,20,30,40,50};		//aggregate initialization -> c style
	int arr1[]{10, 20, 30};			//aggregate initialization -> c++ style

//	Student s1 = {100,"shil"}; 	// aggregate initialization for object-> c style
	Student s1{100,"shil"}; 	// aggregate initialization for object-> c++ style

	cout << s1.rollNo << " " << s1.name << endl;

	//aggregate initialization for array of objects
	Student s_arr[]{Student{100, "shil"}, Student{101,"raj"}, Student{103, "ram"}};  // array of object

	for(int i=0;i<3;i++){
		cout << s_arr[i].rollNo << " " << s_arr[i].name << endl;
	}

//	B b{20}; //c++ 11 -> c++14/c++17 - made it robust
	B b{{10},20};

	cout << b.x << " " << b.y << endl;

	Student s2{145, "shil", {1, "PG-DAC"}};  // c++11
	Student s3{.rollNo = 123, .name = "aditya", {.course_id = 1, .course_name = "PG-DAC"}}; //c++ 20

	cout << s2.rollNo << " " << s2.name << " " << s2.course.course_id << " "<< s2.course.course_name <<endl;
	return 0;
}



