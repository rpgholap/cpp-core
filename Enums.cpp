/*
Enums are user-defined types which consist of named constants. 
Enums are used to make the program more readable.
*/

#include <iostream>
using namespace std;

int main(){
    enum Meal{ breakfast, lunch, dinner};

    /*(breakfast, lunch, dinner) are constants; 
    the value for “breakfast” is “0”, 
    the value for “lunch” is “1” 
    and the value for “dinner” is “2”*/
    Meal m1 = lunch;
    cout<<m1;
    return 0;
}