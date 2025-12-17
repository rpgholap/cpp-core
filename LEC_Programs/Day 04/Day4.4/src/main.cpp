/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>
using namespace std;

//define enum Normal Color
//enum Color{
//	ORANGE, BLUE, GREY
//};

// define enum SignalColor
enum class SignalColor{
	RED, YELLOW, GREEN //RED = 0, YELLOW = 1, GREEN = 2
};

enum class Color{
	ORANGE, BLUE, GREY
};


enum class Demo {
	A = 10, B = 20, C = 30, D = 40  // 0, 1, 2, 3
};

enum class ErrorCode{
	NOT_FOUND = 404, INTERNAL_SERVER_ERROR = 500, ACCESS_DENIED = 401
};

enum Zemo{
	A, B = 10, C, D = 20, E
};


int main(){

	Color c;
//	if(Color::c == SignalColor::sc){
//		cout << "color are same" << endl;
//	}


//	Demo d;
//
//	cout << Demo::A << endl;
//	cout << Demo::B << endl;
//	cout << Demo::C << endl;
//	cout << Demo::D << endl;

	Zemo x;

	cout << Zemo::A <<endl;
	cout << Zemo::B <<endl;
	cout << Zemo::C <<endl;
	cout << Zemo::D <<endl;
	cout << Zemo::E <<endl;

	return 0;
}
