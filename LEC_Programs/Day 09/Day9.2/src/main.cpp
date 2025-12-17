//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class A{
	int val;
public:
	A(int val);
	void display();
};

A::A(int val): val(val){}
void A::display(){
	cout<< val <<endl;
}

template <typename T>
class Demo{
	T val;
public:
	Demo(T val);

	T getVal();
};

template <typename T>
Demo<T>::Demo(T val) : val(val){} 	//A::A(int val): val(val){}

template <typename T>
T Demo<T>::getVal(){		//void A::display(){
	return val;			//	cout<< val <<endl;
}						//}



template <typename T>
class Number{	// int, float, double
	T val;
public:
	Number(T val): val(val){}

	T getVal(){
		return val;
	}
};


//class IntNumber{};
//class DoubleNumber{};
//class String{};
//class charNumber{};

int main() {

	Demo<double> d1(10.2);

	Number<int> n1(10);

	Number<double> n2(40.5);

	cout << d1.getVal() << endl;

	cout << n1.getVal() << endl;
	cout << n2.getVal() << endl;
	return 0;
}
