//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main(){

	map<int, string> m1;	//created object of map

//  keys  ->  values
//	-----------------
	m1[10] = "shil";
	m1[10] = "himanshu";		//overrides values[3] = "himashu";
	m1[18] = "isha";
	m1[11] = "aniket";
	m1[1] = "prathamesh";
	// sorted keys -> Red-Black Trees

//	1. to check if the key exists -> values[key]

	m1.insert({33, "Rahul"});	//modern
	m1.insert(make_pair(44, "Gaurav")); //old syntax

	m1.erase(10);

	m1.empty();	//checks if the map is empty
	m1.size();

	auto it = m1.find(18); //heap -> dynamic memory
	if(it != m1.end()){
		cout << "found : " << it->second<<  endl;
	}else{
		cout << "not found" << endl;
	}

	for(auto &m: m1){
		cout << m.first << " : " << m.second << endl;
	}

	return 0;
}

int mainList(){

	// list -> int
	list<int> l1;		//created an object of list

//	list -> same as Doubly linked list

	l1.push_back(10);	// as a last element
	l1.push_front(20);	// as a first element
	l1.push_back(30);
	l1.push_back(30);


	for(int val: l1)
		cout << val << " ";
	cout << endl;


	//Insert in middle
	auto it = l1.begin();
	advance(it, 2);		// iterator paramter, distance from begin

	l1.insert(it, 100);		// 100 -> after 2 distance

	it = l1.begin();
	advance(it, 1);			// distance 1

	l1.insert(it, 90);		// distance 1

	for(int val: l1)
		cout << val << " ";
	cout << endl;

	//Erase
	it = l1.begin();
	advance(it, 2);

	l1.erase(it);	//10 deleted

	for(int val: l1)
		cout << val << " ";
	cout << endl;

	l1.remove(30);

	for(int val: l1)
		cout << val << " ";
	cout << endl;
	cout << l1.size() << endl;

	l1.sort();
	l1.reverse();


//	cout << l1 << endl;
//	cout << l1[1] << endl;	//not valid

	return 0;
}

int mainVec() {

	//declare a vector -> create a object of vector
	vector<int> vec;			//<int> -> integer, <double> -> floating,
							// <char> -> characters, <string> -> string
							// uso(user defined object) <object> - object

	vec.push_back(10);	//size -> 1, capacity -> max elements that can be stored
	cout <<"Size : " << vec.size() << " Capacity : " << vec.capacity() << endl;
	vec.push_back(20);
	cout <<"Size : " << vec.size() << " Capacity : " << vec.capacity() << endl;
	vec.push_back(30);
	cout <<"Size : " << vec.size() << " Capacity : " << vec.capacity() << endl;
	vec.push_back(40);
	cout <<"Size : " << vec.size() << " Capacity : " << vec.capacity() << endl;
	vec.push_back(50);
	cout <<"Size : " << vec.size() << " Capacity : " << vec.capacity() << endl;
//	vec -> 4 values		similar to ArrayList
	cout << endl;

	cout <<"Size : " << vec.size() << endl;
	cout << vec[0] << endl;
	cout << vec[1] << endl;
	cout << vec[2] << endl;	//allowed

	for(int val : vec){			//for each
		cout << val << " ";
	}

	cout << endl;

	for(int i=0;i<vec.size();i++){
		cout << vec[i] << " " ;
	}

	cout << endl;
	cout <<"Front: " <<  vec.front() << endl;
	cout <<"Back: " << vec.back() << endl;

	auto it = vec.begin();	// first occurence with iterator return type
	vec.insert(it + 2, 2); //2 i want to insert at 0
	// insert -> O(n)

	for(int val : vec){			//for each
		cout << val << " ";
	}

	vec.pop_back();		// last element pop

	cout << endl;

	for(int val : vec){			//for each
		cout << val << " ";
	}

	vec.clear();

	for(int val : vec){			//for each
		cout << "anything"<< endl;
		cout << val << " ";
	}

	return 0;
}
