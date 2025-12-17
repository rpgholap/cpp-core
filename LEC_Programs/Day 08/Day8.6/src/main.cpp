//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Complex{
	int real, imag;

public:
	Complex(): real(0), imag(0){}
	Complex(int real, int imag) : real(real), imag(imag){}

	void print(){
		cout << real << " + " << imag << "i"<< endl;
	}

	int operator[](int index){
		if(index == 0) return real;
		if(index == 1) return imag;

		throw out_of_range("Index out of bounds!");
	}
};

int main1() {

	Complex c1(10,20);

	int val = c1[0];
	int val1 = c1[1];
	int val2 = c1[2];

	cout << val << endl;
	cout << val1 << endl;
	cout << val2 << endl;


	return 0;
}



class Map{
	string keys[10];			//Keys -> 	keys[i] 		0 1 2 3 4 5
	string values[10];		//Values -> values[i] 	0 1 2 3 4 5
	int count;

public:

	Map() : count(0){}

	string& operator[](const string &key){
//		1. for checking if exist and to show
		for(int i=0;i<count;i++){
			if(key == keys[i])
				return values[i];
		}

//		2. for creating new map entry
		if(count < 10){
			keys[count] = key;
			values[count] = "";
			count++;
			return values[count - 1]; //values[0]
		}
		throw out_of_range("index out if bounds!");
	}

	void print(){
		for(int i=0;i<count;i++){
			cout << keys[i] << " : " << values[i] << endl;
		}
	}

};

int main(){

	Map map;

	map["city"] = "mumbai";	// assigning a value to a map with help of [] operator
//	int map[] -> map[5] = 10;

	map["name"] = "shil";
	map["course"] = "pgdac";


	string result = map["city"];

	cout << result << endl;

	map.print();

//	map[key] -> value;
//	map.operator [](key) -> value;
	return 0;
}



