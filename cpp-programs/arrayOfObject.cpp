#include <iostream>
using namespace std;

/*
    Array of Objects:
    - An array of objects is declared the same as any other data-type array. 
    - An array of objects consists of class objects as its elements. 
    - If the array consists of class objects it is called an array of objects.

    

*/


class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
