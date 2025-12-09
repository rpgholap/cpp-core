#include<iostream>
using namespace std;

/*
    Unions are similar to structures but they provide better memory management then structures.  
    Unions use shared memory so only 1 variable can be used at a time.
*/

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

/*
    Unions are used to save memory when we know that we will only use one of the variables at a time
    We can only use 1 variable at a time 
    otherwise the compiler will give us a garbage value
    The compiler chooses the data type which has maximum memory for the allocation.
*/
int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}