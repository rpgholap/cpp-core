//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

class String{
public:
	char* str;
	int len;
	void setString(const char* s){
		len = strlen(s);
		str = new char[len];
		strcpy(str, s);
	}

	String() : str(nullptr), len(0){
	}

	String(char* s, int len){
		setString(s);
	}

//	default copy constructor -> shallow copy


	//copy cons
//	String(String &other){
//		len = other.len;
//		str = new char[len];
//		strcpy(str, other.str);
//	}

	void accept(){
		char buffer[100];
		cout << "Enter string:" << endl;
		cin >> buffer;

		setString(buffer);
	}

	void print() const{
		cout << str << endl;
	}

	char* getStr() const {
		return str;
	}

	~ String(){
		delete[] str;
	}
};

int main() {
	String s1;

	s1.accept();
	cout << "Your String:" << endl;
	s1.print();

//	String s2 = s1;		//using copy constructor -> compiler -> copy cons -> shallow copy


	String s2 = s1;  	//using own copy constructor -> deep copy

	cout <<"after assigment:" << endl;

	s2.print();

	cout << "S1 address: " << &s1 << endl;
	cout << "S2 address: " << &s2 << endl;

	s2.str[0] = 'J';

	cout <<"after changing s2 0th char element:" << endl;

	s1.print();
	s2.print();

	cout << (void*)s1.getStr() << endl;
	cout << (void*)s2.getStr() << endl;
	return 0;
}
