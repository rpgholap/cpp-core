//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

//void divide(int a, int b) throw(){ // throws -> int value, throws() -> default no exception
//void divide(int a, int b) noexcept { // denotes that no exception will occur within this function

void divide(int a, int b) {
	try{
		if(b == 0){
			cerr << "Divide by Zero!" << endl;
			throw 10.5; 	//string
		}
	int result = a / b;
	cout << result << endl;
	} catch(double e){
		cout << "Error: in divide with code : " << e << endl;
		throw;
	}
}

//throw new ArithmeticException("Divide by zero!"); 	// object
// throw int, double, char*, object -> custom exception

int main1(){

	int a = 10;
	int b = 0;
	int res = 0;
	try{
//		throw "error: from outer try block";
		try{
			if(b == 0)
				throw "error: from inner try block";
			res = a / b;
		} catch(const char* e){
			cerr << "caught in inner catch block" << e << endl;
			throw;		//rethrow -> to catch at outer block
		}
		cout << "after try-catch block" << endl;
	} catch(...){
		cerr << "caught in outer catch block";
	}
	return 0;
}


int main() {
	int a = 10;
	int b = 0;		//divide by 0 -> terminating abnormally

	try{
		divide(a,b);		// func call
	} catch(int e){
		cerr << "Int Exception cause: " << e << endl;
	} catch(char const* e){
		cerr << "Char* Exception cause: " << e << endl;
	}
	catch(...){
		cerr << "default exception catch" << endl;
	}

	cout << "continue the program" << endl;

	return 0;
}
