#include<iostream>
using namespace std;    
int main(){

    /*
        Array: a collection of elements of the same data type, stored in contiguous memory locations.

    
    */

    int marks[4] = {12, 14, 39, 30};
    // Accessing elements of an array
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // using a loop to access elements of an array
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // Modifying elements of an array
    marks[2] = 100;
    cout << "After modification: " << endl;
    cout << marks[2] << endl;


    // Pointers and Arrays:
    // An array name acts as a pointer to the first element of the array.
    int* p = marks; // p points to the first element of the array

    cout<< *(p++) << endl; 
    cout<< *(++p) << endl;
    // cout << "The value of *p is:  " << *p << endl; 
    // cout << "The value of *(p+1) is:  " << *(p+1) << endl; 
    // cout << "The value of *(p+2) is:  " << *(p+2) << endl; 
    // cout << "The value of *(p+3) is:  " << *(p+3) << endl; 

    // Pointer Arithmetic: accessing elements of an array using pointers
    // addr(new) = addr(old) + i * sizeof(data_type)
    // (p + i) = p + i * sizeof(data_type)


}