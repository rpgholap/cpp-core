#include<iostream>
using namespace std;
/*
    OOP - Classes And Objects

    CPP --> Initially called --> c with classes by stroustrup
    Classes --> extension of structures in C

    Structures had Limitations:
    - Members are public
    - No methods

    Classes --> Structures + more
    Classes --> can have methods and properties
    classes --> can make few members private and few as public

    Structures in C++ are typedefed

    you can declare objects along with the class declaration
    class EMP{
        // class definition
    } rutuja, anuja, prerna; // objects of class EMP

    rutuja.salary = 8  makes no sense if salary is private in class EMP

*/


// Nesting of Member Functions:

class binary{
    private:    
        string s;
        void chk_bin();
    public:
        void read();
        void display();
        void ones_complement();
};

void binary :: read(){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) !='0' && s.at(i) != '1'){
            cout<<"Incorrect binary format" << endl;
            exit(0);        
        }
    }
}

void binary :: ones_complement(){
    chk_bin();
    for(int i=0; i<s.length(); i++){
        if(s.at(i) =='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(){
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0; i< s.length(); i++){
        cout<< s.at(i);
    }

    cout<<endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();

    return 0;
}