//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

// function template
template <typename T>
T add(T a, T b){		//typename
	return a + b;
}

// if same type -> it can be used

////normal function
//int add(int a, int b){
//	return a + b;
//}
//
////method overloading
//double add(double a, double b){
//	return a + b;
//}

// 10.0 15.5


//string
//float
//char

int main() {
	int a = 10, b = 20;
	double c = 10.3, d = 30.2;	// precision = in this case it will not work

	cout << add(a,b) <<endl;
	cout << add(c,d) <<endl;


//	cout << add(a,d) << endl;	// not valid -> error: no matching function for call to 'add(int&, double&)'
	cout << add<double>(a,d) << endl;	//valid
					  //10.0 30.2
	return 0;
}
