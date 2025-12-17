#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // 1. Default constructor
    Student() {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0.0;
    }

    // 2. Parameterized constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this-> pointer
    Student(int rollNo, float marks) {
        this->rollNo = rollNo;
        this->marks = marks;
        this->name = "Unknown";  // assigned internally
    }

    // Function to print details
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------\n";
    }
};

int main() {

    // Object using default constructor
    Student s1;
    
    // Objects using parameterized constructor
    Student s2(101, "Rutuja", 88.5);
    Student s3(102, "Pranali", 92.0);

    // Object using constructor with this->
    Student s4(200, 75.0);

    cout << "Student 1:\n";  s1.display();
    cout << "Student 2:\n";  s2.display();
    cout << "Student 3:\n";  s3.display();
    cout << "Student 4:\n";  s4.display();

    return 0;
}
