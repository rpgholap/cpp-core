#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++: to execute a block of code repeatedly as long as a specified condition is true.
    Loops are essential for tasks that require repetition, such as iterating through arrays, processing
    collections, or performing calculations until a certain condition is met.
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;

    // Syntax for for loop : used to execute a block of code a specific number of times.
    // The for loop consists of three parts: initialization, condition, and updation.
    // Initialization: This is executed once at the beginning of the loop.  
    // Condition: This is checked before each iteration. If it evaluates to true, the loop body is executed.
    // Updation: This is executed after each iteration of the loop body, typically to update the loop variable.
    
    // sntax:
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using do-while loop: one time execution is guaranteed even if the condition is false.
    // This is useful when you want to ensure that the loop body is executed at least once  
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    return 0;
}