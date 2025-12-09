#include<iostream>
using namespace std;
// Data Types:
/*
    1. define type of data a variable can hold
    2. C++ has several built-in data types, including:
       - int: for integers (e.g., -1, 0, 21)
       - float: for floating-point numbers (e.g., 1.21, 0.0, -3.14)
       - char: for single characters (e.g., 'a', 'b', 'c')
       - string: for sequences of characters (e.g., "hello", "world")
       - bool: for boolean values (true or false)
       - double: for double-precision floating-point numbers (e.g., 1.23456789, 0.00001)

    3. built-in data types can be used to declare variables, which are named storage locations that can hold values of a specific type.
    4. Variables can be declared with a specific data type, and their values can be changed during program execution.
    5. C++ also supports user-defined data types, such as structs and classes, union, enum, and typedef,
       which allow for more complex data structures.        
    5. Derived data types like arrays, functions, pointers, and references are also available in C++.

*/ 

void sum(){
    int glo = 6; // global variable
}
int main(){
    int glo = 9 ; // local variable
    int a = 14;
    int b = 15;
    float c = 3.14;
    char d = 'r';
    bool is_true = true;

    sum();
    cout << glo << is_true << endl;;
    cout << "The value of glo is: " << glo << endl; // prints local variable glo
    cout << "The value of a is:"<< a << endl;
    cout<< "The value of b is: "<< b << endl;
    cout << "The value of c is: " << c << endl;
    cout<< "The value of d is: "<< d ;

    return 0;
}

