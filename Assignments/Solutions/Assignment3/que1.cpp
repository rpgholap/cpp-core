#include <iostream>
using namespace std;
class Employee {
private:
    int id;
    string name;
    mutable int accessCount;   // can be modified even in const function
public:
    // Parameterized Constructor
    Employee(int id, string name)
        : id(id), name(name), accessCount(0) {}

    // User-defined Copy Constructor (Deep Copy)
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;   // copied independently
        cout << "User-defined Copy Constructor called\n";
    }
    // const member function (CAN modify mutable members)
    void display() const {
        accessCount++;   // allowed because accessCount is mutable
        cout << "ID: " << id << ", Name: " << name
             << ", Access Count: " << accessCount << endl;
    }

    // Function to print object address (to test deep vs shallow copy)
    void printAddress() const {
        cout << "Object address: " << this << endl;
        cout << "Name variable address: " << &name << endl;
    }
};
int main() {
    cout << "--- Creating e1 ---\n";
    Employee e1(101, "Rutuja");
    e1.display();
    e1.display();
    e1.display();
    cout << "\n--- Copying e1 into e2 (calls copy constructor) ---\n";
    Employee e2 = e1;  // invokes user-defined copy constructor
    cout << "\nDisplaying e2:\n";
    e2.display();
    cout << "\n--- Address Comparison ---\n";
    cout << "e1:\n"; e1.printAddress();
    cout << "e2:\n"; e2.printAddress();
    return 0;
}
