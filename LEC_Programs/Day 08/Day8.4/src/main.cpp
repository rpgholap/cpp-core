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

	friend bool operator<(const Complex &a, const Complex &b);
	friend bool operator>(const Complex &a, const Complex &b);
	friend bool operator<=(const Complex &a, const Complex &b);
	friend bool operator>=(const Complex &a, const Complex &b);
	friend bool operator==(const Complex &a, const Complex &b);
};

bool operator<(const Complex &a, const Complex &b){
	return a.real < b.real && b.real < b.imag;
}

bool operator>(const Complex &a, const Complex &b){
	return a.real > b.real && b.real > b.imag;
}

bool operator<=(const Complex &a, const Complex &b){
	return a.real <= b.real && b.real <= b.imag;
}

bool operator>=(const Complex &a, const Complex &b){
	return a.real >= b.real && b.real >= b.imag;
}

bool operator==(const Complex&a, const Complex &b){
	return a.real == b.real && a.imag == b.imag;
}

int main() {

	Complex c1(5,10);
	Complex c2(10,20);
	Complex c3(10,20);

	bool result = c1 < c2;

	bool resultEqual = c2 == c3;

	cout << "Result for Less than: "<< result << endl;
	cout << "Result for Equal Check: "<< resultEqual << endl;
//	10 < 20 -> true or false

//	c1 < c2, c1 > c2, c1 <= c2, c1 >= c2, c1 == c2, c1 != c2

	return 0;
}
