//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Complex{
	int real, imag;

public:
	Complex(): real(0), imag(0){}
	Complex(int real, int imag) : real(real), imag(imag){}

	//our own copy constructor -> deep copy
	// compiler provided -> shallow copy

	void print(){
		cout << real << " + " << imag << "i"<< endl;
	}

	//	Assignment =

	Complex& operator=(Complex &c){
		if(this != &c){
			this->real = c.real;
			this->imag = c.imag;
		}
		return *this;
	}


	// fstream -> ostream -> basic_ostream, istream -> basic_istream
	friend ostream& operator<<(ostream &out, Complex &c);
	friend istream& operator>>(istream &in, Complex &c);
};

ostream& operator<<(ostream &out, Complex &c){
	out << c.real << " + " << c.imag << "i";
	return out;
}

istream& operator>>(istream &in, Complex &c){
	in >> c.real >> c.imag;
	return in;
}


int main(){
	Complex c1(10,20);
	Complex c2(20,30);

	Complex c3 = c2;		// copy constructor
//			c3.operator=(c2);

	cout << c2 << endl;
	cout << c3 << endl;

	return 0;
}


int main1() {

	Complex c1(10,20);
	Complex c2(20,30);

	Complex c3;

	cout << "Enter a Complex number: " << endl;
	cin >> c3;

//	c1.print();
//	c2.print();

//	cout << c1;
//	cout.operator<<(c1);

//	cin >> c1;
//	cin.operator>>(c1);

	cout << "Complex c1 : " << c1 << endl; // valid
	cout << "Complex c2 : " << c2 << endl; // valid
	cout << "Complex c3 : " << c3 << endl; // valid
//	<< >> -> stream operators

	return 0;
}
