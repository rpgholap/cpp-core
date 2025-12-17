/*
 * main.cpp
 *
 *  Created on: 03-Dec-2025
 *      Author: Shilbhushan
 */

#include <cstdio>

struct Student{
	int rollNo;
	char name[20];

	//struct member function
	void setData(){
			printf("Enter Roll No: ");
			fflush(stdout);
			scanf("%d", &rollNo);
			printf("Enter Name: ");
			fflush(stdout);
			scanf("%s", name);
	}

	void printData(){
		printf("RollNo : %d \n", rollNo);
		printf("Name : %s \n", name);
	}
};

int main(){
	Student s1;

	s1.setData();
	s1.printData();

	return 0;
}
