#include<iostream>
using namespace std;


/*
    Call By Value:
    Call by value is a method in C++ to pass the values to the function arguments. 
    In case of call by value the copies of actual parameters are sent to the formal parameter, 
    which means that if we change the values inside the function that will not affect the actual values.
*/

// This will not swap a and b in main function
// It will only swap the values of a and b inside the function
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}