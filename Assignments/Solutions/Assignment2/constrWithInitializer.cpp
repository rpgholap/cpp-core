#include <iostream>
using namespace std;

class Employee {
private:
    const int employeeId;   // const member
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string name, float salary)
        : employeeId(id), name(name), salary(salary) {
        // Constructor body can be empty
    }

    // Function to display employee details
    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Rohan", 55000.50);
    e1.display();

    return 0;
}
