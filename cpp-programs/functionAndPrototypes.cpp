#include<iostream>
using namespace std;    

/*
    Functions are the main part of top-down structured programming. 
    We break the code into small pieces and make functions of that code. 
    Functions help us to reuse the code easily. 
*/

// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable

// Function prototype : template of the function which tells the details of the function e.g(name, parameters) to the compiler. 
// Function prototypes help us to define a function after the function call. 
int sum(int a, int b){
 int c = a+b;
    return c;
}

/* Formal Parameters
    The variables which are declared in the function 
    are called a formal parameter. 
*/


/*
    void as a return type means that this 
    function will not return anything, and 
    this function has no parameters.
*/
void g(){
    cout<<"\nHello, Good Morning";
}


int main(){
    int num1, num2;

    /*
        actual parameters :
        The values which are passed to the function are called actual parameters
    */
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();


    return 0;   // means that program ended successfully
}
