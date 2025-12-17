//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
#include <exception>  // for exception class
using namespace std;

class ArithmeticException : public exception{
	string message;
	int lineNumber;
	string functionName;
	string fileName;

public:
	ArithmeticException(string msg, int line, string func, string file) : message(msg), lineNumber(line), functionName(func), fileName(file){

	}

	// with help of exception class
//	const char* what() const noexcept override{
//		return message.c_str();
//	}

	void printStackTrace() const{
		cerr << message << endl;
		cerr << "at " << lineNumber << " of " << functionName << " " << fileName << endl;
	}

};

#define ARITH_EXCEPT(msg) ArithmeticException((msg), __LINE__, __FUNCTION__, __FILE__)

int divide(int a, int b){
	if(b == 0)
//		throw ArithmeticException("Divide by zero!", __LINE__, __FUNCTION__, __FILE__);
		throw ARITH_EXCEPT("Divide by Zero!");
	return a / b;
}

int main() {

	int a = 10;
	int b = 0;

	try{
		cout << divide(a,b) << endl;
	}catch (ArithmeticException &e) {
		e.printStackTrace();
	}

	return 0;
}
