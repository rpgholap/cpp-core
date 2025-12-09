#include<iostream>
using namespace std;


// iostream: This is the standard C++ library for input and output operations.
// stream: This library provides classes for string-based input and output operations.
// input stream: direction of flow of bytes takes place from input device to the main memory.
// output stream: direction of flow of bytes takes place from main memory to output device.

int main(){
    // This is a simple program to demonstrate input and output in C++
    
    int number;
    cout << "Enter a number: "; // Prompt the user for input
    // << : insertion operator, used to send output to the console
    // >> : extraction operator, used to read input from the console
    cin >> number; // Read input from the user

    cout << "You entered: " << number << endl; // Output the entered number

    return 0;
}