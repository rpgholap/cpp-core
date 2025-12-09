#include<iostream>
using namespace std;

int main(){

    // Break: used to exit a loop prematurely, skipping the remaining iterations.
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    
    // Continue: used to skip the current iteration of a loop and continue with the next iteration.
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}