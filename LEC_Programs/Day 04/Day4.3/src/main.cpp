/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

//method overloading
//__Z3displayf

extern"C"
//display
	{
	void display(float val){
		cout << val << endl;
	}

	//eerror: conflicting declaration of C function 'void display(int)'
//	void display(int val){
//		cout << val << endl;
//	}

}
//__Z3displayi
	void display(int val){
		cout << val << endl;
	}


int main(){
//	print(10);
	return 0;
}
