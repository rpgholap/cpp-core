/*
 * student.h
 *
 *  Created on: 03-Dec-2025
 *      Author: Shilbhushan
 */

#ifndef STUDENT_H_   // header guard -> STUDENT_H_ it is a macro -> if it is already defined then ignore it
#define STUDENT_H_	// if it not defined -> define the macro

//#pragma once  // no standardization -> not recommended -> but industry project they use it, most of the compilers allows it


//code
#include <iostream>


namespace my{
	int val = 25; //declaration // different
}
class Student{
public:
	int rollNo;
	std::string name;
	void setData();
	void printData();
};


#endif /* STUDENT_H_ */  // endif -> this header section or macro definition section ends
