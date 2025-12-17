//============================================================================
// Name        : main.cpp
// Author      : shil

//============================================================================

#include <iostream>
using namespace std;

//void display(int val){ //10
//	val = 20;
//	cout << "Variable inside function: " << val << endl;
//}

void display(int &ref){ // value(copy) -> reference(original)
	ref = 20;
	cout << "Variable inside reference function: " << ref << endl;
}

void display(int *ptr){
	*ptr = 20;
	cout << "Variable inside pointer function: " << *ptr << endl;
}

int main(){

	int val = 10;

	int &ref = val; // imp

	int *ptr = &val;

	cout <<"Value of ref: " << ref << endl;
	cout <<"Value of val: " << val << endl;
	cout <<"Value of val via ptr: " << *ptr << endl;

	cout << "Address of ref: " << &ref << endl;
	cout << "Address of val: " << &val << endl;
	cout << "Address of val via ptr: " << ptr << endl; //ptr ka value = address of val
	cout << "Address of ptr: " << &ptr << endl; //ptr ka address

	return 0;
}










int main1() {
	int val = 10;

//	int *ptr = &val;  // assigning a address -> ptr

	cout << "Variable before function call: " << val << endl;

	display(val);  //10  // pass by reference -> val = original

	display(&val); // pass by address
	cout << "Variable after function call : " << val << endl;

	return 0;
}


