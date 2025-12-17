#include<iostream>
using namespace std;

/*
    a user-defined data type that allows you to combine data of different types
    into a single type. It is a way to group related variables together.
*/

struct employee
{
    /* data */
    int eId; 
    char favChar; 
    float salary; 
}; 

// we can create structure variables without using the keyword “struct” and name of the struct
// by using typedef
// typedef is used to create an alias for a data type, making it easier to use in
// the code. It allows you to define a new name for an existing data type, which can improve code readability and maintainability.

// typedef struct employee
// {
//     /* data */
//     int eId; //4
//     char favChar; //1
//     float salary; //4
// } ep;



 int main() {
     struct employee rutuja;
     rutuja.eId = 1;
     rutuja.favChar = 'c';
     rutuja.salary = 120000000;
     cout<<"The value is "<<rutuja.eId<<endl; 
     cout<<"The value is "<<rutuja.favChar<<endl; 
     cout<<"The value is "<<rutuja.salary<<endl; 
     return 0;
}


// int main(){
// ep harry;
//     struct employee shubham;
//     struct employee rohanDas;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 120000000;
//     cout<<"The value is "<<harry.eId<<endl; 
//     cout<<"The value is "<<harry.favChar<<endl; 
//     cout<<"The value is "<<harry.salary<<endl; 
//     return 0;
// }