#include<iostream>
using namespace std;
/*
    Classes: 
    Classes are user-defined data-types and are a template for creating objects. 
    Classes consist of variables and functions which are also called class members.


    Public Access Modifier: 
    - Available for everyone. 
    - They can be accessed both inside and outside the class. 
    - Dot (.) operator: used in the program to access public data members directly.


    Private Access Modifier:
    - can only be used inside the class. 
    - They are not permissible to be used by any object or function outside the class.
*/    

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){

    Employee harry;
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;

}