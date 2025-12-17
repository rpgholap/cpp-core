#include<iostream>
using namespace std;

/*
    Call by Reference in C++
    Call by reference is a method in C++ to pass the values to the function arguments. 
    In the case of call by reference, the reference of actual parameters is sent to the formal parameter, 
    which means that if we change the values inside the function that will affect the actual values. 
*/

void swapReferenceVar(int &a, int &b){    //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}