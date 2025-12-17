
// There are two types of header files:  website for reference -  ( cpp reference )
// 1. System header files: It comes with the compiler
#include<iostream>

// 2. User-defined header files: It is written by the programmer 
// #include "operator.h"  --> this will produce an error if operator.h does not exist in current directory

using namespace std;

int main(){
    int a = 4, b = 5;
    cout << "Operators in CPP:" << endl;
    cout << "====================" << endl;
    // Arithmetic Operators --> used to perform basic mathematical operations
    cout << "Follwing are the types of operators in C++:" << endl;
    cout << "1. Arithmetic Operators" << endl;

    cout << "The Value of a + b is: " << a + b << endl; // Addition
    cout << "The Value of a - b is: " << a - b << endl; // Subtraction
    cout << "The Value of a * b is: " << a * b << endl; // Multiplication              
    cout << "The Value of a / b is: " << a / b << endl; // Division
    cout << "The Value of a % b is: " << a % b << endl; // Modulus
    cout << "The Value of a++ is: " << a++ << endl; // Post-increment
    cout << "The Value of ++a is: " << ++a << endl; // Pre-increment
    cout << "The Value of a-- is: " << a-- << endl; // Post-decrement
    cout << "The Value of --a is: " << --a << endl; // Pre-decrement            

    cout << "====================" << endl;

    // Assignment Operators  --> used to assign values to variables
    // int a = 3, b =9;
    // char d = 'd';
    

    // comparison operators 
    cout << "Follwing are the comparison operators: " << endl;
    cout << "1. comparison Operators" << endl;
    cout << "The Value of a == b is: " << (a == b) << endl; 
    cout << "The Value of a != b is: " << (a != b) << endl; 
    cout << "The Value of a >= b is: " << (a >= b) << endl; 
    cout << "The Value of a <= b is: " << (a <= b) << endl; 
    cout << "The Value of a > b is: " << (a > b) << endl; 
    cout << "The Value of a < b is: " << (a < b) << endl; 


    // Logical Operators --> used to perform logical operations
    cout << "Follwing are the logical operators: " << endl;
    cout << "The value of this logical AND operator (a == b) && (a < b) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical OR operator (a == b) || (a < b) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical NOT operator !(a == b) is: " << (!(a == b)) << endl; 

    return 0 ;
}

