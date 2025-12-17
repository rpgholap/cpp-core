//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;


//10 + 20i
class Complex{
	int real, imag;

public:
	Complex(int real, int imag) : real(real), imag(imag){}

	void print(){
		cout << real << " + " << imag << "i"<< endl;
	}

	friend Complex operator+(Complex &a, Complex &b);
	friend Complex operator-(Complex &a, Complex &b);
	friend Complex operator*(Complex &a, Complex &b);
	friend Complex operator/(Complex &a, Complex &b);
};

//real + real imag + imag
Complex operator+(Complex &a, Complex &b){
	int r = a.real + b.real;
	int i = a.imag + b.imag;
	return Complex(r,i);  // construct the object -> return to the function
}

Complex operator-(Complex &a, Complex &b){
	return Complex(a.real - b.real, a.imag - b.imag);
}

Complex operator*(Complex &a, Complex &b){
//		a.real * b.real + b.imag * b.imag
//		a.real * b.imag + b.real * b.imag;
	return Complex(a.real * b.real, a.imag * b.imag);
}

Complex operator/(Complex &a, Complex &b){
	if(b.real == 0 && b.imag == 0)
//		throw ArithmeticeException("Divide by zero");
	return Complex(a.real / b.real, a.imag / b.imag);
}

int main() {

	Complex c1(10,20);
	Complex c2(10,20);

//	Complex c3 = c1 + c2;	// error: no match for 'operator+' (operand types are 'Complex' and 'Complex')

	Complex c3 = c1 + c2;	// valid -> operator+ it is overloaded
	Complex c4 = c1 - c2;
	Complex c5 = c1 * c2;
	Complex c6 = c1 / c2;

	c1.print();
	c2.print();
	cout << "---------" << endl;
	c3.print();

	c4.print();

	c5.print();

	c6.print();

	return 0;
}
