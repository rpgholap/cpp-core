//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Demo{
	int val;

public:
	Demo(int val) : val(val){}

	static int add(Demo d1, Demo d2){
		return d1.val + d2.val;
	}

//	Syntax:
//	Return_Type operator_type(){
//		//code
//		return_statement;
//	}

	//Member operator -> + - * / -> not recommended
	// it actually changes the lvalue
	// ++, --, [], = -> Member function
	Demo operator+(const Demo &d){
		cout << "single para" << endl;
		return Demo(this->val+ d.val);
	}

	// non member function
	friend Demo operator+(const Demo &a, const Demo &b);

	void print(){
		cout << val << endl;
	}
};

Demo operator+(const Demo &a, const Demo &b){
	cout << "dual para" << endl;
	return Demo(a.val + b.val);
}


int main() {

//	class_type object;

	Demo d1(10);		// object of Demo
	Demo d2(20);		// object of Demo

//	Demo d3 = d1 + d2;	//addition of d1 and d2 -> not valid

//	Demo d3 = Demo::add(d1, d2);

	Demo d3 = d1 + d2;	// valid now as we have overloaded operator+ in our class
//		d1 + d2 = d1.operator+(d2);

	int a = 10;
	int b = 20;

	int c = a + b;	//like normal data types
//		a + b = a.operator+(b);
	cout << c << endl;

	d3.print();

//	cout << d3 << endl;
	return 0;
}
