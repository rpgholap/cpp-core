//============================================================================
// Name        : main.cpp
// Author      : shil

//============================================================================

#include <iostream>
using namespace std;


//1. Single Inheritance
//class A {
//public:
//	int x;
//};
//
//class B : public A {
//public:
//	int y;
//
//};

//2. Multilevel Inheritance
//class A {
//public:
//	int x;
//};
//
//class B : public A {
//public:
//	int y;
//
//};
//
//class C : public B{
//public:
//	int z;
//};

//3. Hierarchical
//class A {
//public:
//	int x;
//};
//
//class B : public A {
//public:
//	int y;
//
//};
//
//class C : public A{
//public:
//	int z;
//};

//4. Multiple Inheritance
//class A {
//public:
//	int x;
//};
//
//class B {
//public:
//	int y;
//
//};
//
//class C : public A, public B{
//public:
//	int z;
//};


//5. Hybrid Inheritance
//class A {
//public:
//	int x;
//};
//
//class B : public A{
//public:
//	int y;
//
//};
//
//class C : public A{
//public:
//	int z;
//};
//
//class D : public B, public C{
//public:
//	int a;
//};

class A {
public:
	int x = 10;

	void getX(){
		cout << "value from A: "<< x << endl;
	}
};

class B : virtual public A{
public:
	int y;

};

class C : virtual public A{
public:
	int z;
};

class D : public B, public C{
public:
	int a;
};

int main() {

	D d;

//	cout << d.x << endl;		//error: request for member 'x' is ambiguous
//	cout << d.x << endl;
	d.getX();

	return 0;
}
