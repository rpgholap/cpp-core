#include<iostream>
using namespace std;
// Variable : a named storage location that can hold a value 
// various types of variables can be declared in c++
// 1. Integer variable (-1, 0, 21)
// 2. Float variable (1.21, 0.0, -3.14)
// 3. Character variable ('a', 'b', 'c', '1', '2', '3')
// 4. String variable ("hello", "world", "C++ programming")
// 5. Boolean variable (true, false)
// 6. Double variable (1.23456789, 0.00001, -123456.789)


void sum(){
    int glo = 6; // global variable
}
int main(){
    int glo = 9 ; // local variable
    int sum = 6;    // sum is an integer variable which holds the value 6 in memory

    // Syntax to declare a variable: scope means the region in code where the existence of the variable is valid
    // data_type variable_name = value;

    // Based on scope of variable, it can be:
    // 1. Local variable: declared inside a function or block, accessible only within that function or block
    // 2. Global variable: declared outside any function, accessible throughout the program

    // * Global and Local variables can have the same name, but they will be treated as different variables.
    // * Variable names should be meaningful and follow naming conventions (e.g., camelCase,    snake_case).
    // * Variable names should not start with a digit and should not contain special characters except underscore(_)


    // local variable have higher precedence than global variable
    cout << "The value of glo is: " << glo << endl; // prints local variable glo
    
    return 0;
}