#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorial 9";
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    /*
        1. Sequence Structure
        Sequence structure refers to the sequence in which program execute instructions one after another.
        2. Selection Structure
        Selection structure refers to the execution of instruction according to the selected condition, 
        which can be either true or false. 
        There are two ways to implement selection structures, by “if-else statements” or by “switch case statements”.
        3. Loop Structure
Loop    structure refers to the execution of an instruction in a loop until the condition gets false
    */

    // 1. Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}