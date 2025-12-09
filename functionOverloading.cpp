#include<iostream>
using namespace std;

/*
    Function Overloading : a process to make more than one function with the same name but different paramenters, numbers, or sequence.
*/



int sum(float a, int b){
    cout<<"Using function with 2 arguments: "<<endl;
    return a+b;
}

int sum(int a, int b, float c){
    cout<<"Using function with 3 arguments: "<<endl;
    return a+b+c;
}

// Calculate the volumen of a cylinder
int volume(double r, int h){
    return(3.14 * r * r * h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}


int main(){
    cout<<"The sum of 3 & 5 is: "<< sum(3, 6) << endl;
    cout<<"The sum of 3, 4 & 5 is: "<< sum(3, 4, 6) << endl;
    cout<<"The volume of cylinder with radius 3 and height 5: "<< volume(3, 5)<<endl;
    cout<<"The volume of cube with side 8: "<< volume(8)<<endl;
    cout<<"The Volume of recangular box with l 2, breadth 4, height 5: " <<volume(2, 4, 5)<<endl;
    return 0;
}
