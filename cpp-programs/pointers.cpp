#include<iostream>
using namespace std;
int main(){

    // pointer --> data type that holds the address of other data types.
    // A pointer is a variable that stores the memory address of another variable.
    // Pointers are used for dynamic memory allocation, arrays, and functions.


    int a = 4;
    int* b = &a; // pointer variable that holds the address of variable a

    // & --> (address of) operator 
    cout<< "The address of a is: " << &a << endl; 
    cout<< "The address of a is: " << b << endl;

    // * --> (Value at) Dereference operator
    cout<< "The value of address b is: " << *b << endl;
    

    // Pointer to pointer
    int** c = &b; // pointer variable that holds the address of pointer b   
    cout<< "The address of b is: " << &b << endl;
    cout<< "The address of b is: " << c << endl;
    cout<< "The value at address c is: " << *c << endl;    //*c = b
    cout<< "The value at address value_at(value_at(c)) is: " << **c << endl;

    
}