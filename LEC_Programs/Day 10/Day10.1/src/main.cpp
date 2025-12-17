//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Base{
	int x = 10;
protected:
	int y = 20;
public:
	int z = 30;
};

class Derived : protected Base {	// by default private
public:
	void getY(){
		cout << y << endl;
	}

	void getZ(){
		cout << z << endl;
	}
};

class Derived1 : protected Derived{
public:
	void getY1(){
		cout << y << endl;
	}
};

int main() {

	Derived d1;

	//private mode inheritance
//	cout << d1.x << endl; 	//not valid
//	cout << d1.y << endl;	//not valid
//	cout << d1.z << endl;	//not valid

	//public mode inheritance
//	cout << d1.x << endl; 	//not valid
//	cout << d1.y << endl;	//not valid
	d1.getY();				//valid -> protected rule
//	cout << d1.z << endl;	//valid

	//protected mode inheritance
//	cout << d1.x << endl; 	//not valid
//	cout << d1.y << endl;	//not valid
//	cout << d1.z << endl;	//not valid
	d1.getY();
	d1.getZ();

	Derived1 d2;

	d2.getY1();

	return 0;
}
