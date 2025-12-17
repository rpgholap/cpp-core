//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Complex{
	int real, imag;

public:
	Complex(int real, int imag) : real(real), imag(imag){}

	void print(){
		cout << real << " + " << imag << "i"<< endl;
	}

	//pre-increment
	Complex operator++(){
		++real;
		++imag;
		return *this;
	}

	//post-increment
	Complex operator++(int){		// default for compiler to identify
		Complex temp = *this;	// assigned it to a variable
		real++;
		imag++;
		return temp;				//old value
	}

	//please try the -- overload for both pre & post increment.
};

int main() {
	Complex c1(10,20);
	Complex c2(10,20);

	++c1;	// pre-increment 11 21
	c1++;	//post-increment 11 21

	c1.print();

	return 0;
}
