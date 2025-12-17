#include<iostream>
using namespace std;


/*
    Call By Pointer:
    A call by the pointer is to pass the values to the function arguments. 
    In the case of call by pointer, the address of actual parameters is sent to the formal parameter, 
    which means that if we change the values inside the function that will affect the actual values. 
*/

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}