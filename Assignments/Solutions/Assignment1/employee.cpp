#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;     // basic salary
    double grossSalary;   // calculated gross salary

public:
    // Setters
    void setEmpID(int id) { empID = id; }
    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    // Getters
    int getEmpID() { return empID; }
    string getEmpName() { return empName; }
    double getEmpSalary() { return empSalary; }
    double getGrossSalary() { return grossSalary; }

    // Calculate Gross Salary based on rules
    void calculateGrossSalary() {
        if (empSalary <= 5000)
            grossSalary = empSalary + (empSalary * 0.10); // 10% bonus
        else if (empSalary > 5000 && empSalary <= 10000)
            grossSalary = empSalary + (empSalary * 0.15); // 15% bonus
        else
            grossSalary = empSalary + (empSalary * 0.20); // 20% bonus

        cout << "Gross salary calculated successfully!\n";
    }

    // Display employee details
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << empSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;
    int choice;

    while (true) {
        cout << "\n===== EMPLOYEE PAYROLL MENU =====\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int id;
            string name;
            double salary;

            cout << "Enter Employee ID: ";
            cin >> id;
            cout << "Enter Employee Name: ";
            cin >> name;
            cout << "Enter Employee Salary: ";
            cin >> salary;

            emp.setEmpID(id);
            emp.setEmpName(name);
            emp.setEmpSalary(salary);

            cout << "Employee added successfully!\n";
            break;
        }

        case 2:
            emp.calculateGrossSalary();
            break;

        case 3:
            emp.displayEmployeeDetails();
            break;

        case 4: {
            int newID;
            string newName;
            double newSalary;

            cout << "Enter new Employee ID: ";
            cin >> newID;
            cout << "Enter new Employee Name: ";
            cin >> newName;
            cout << "Enter new Employee Salary: ";
            cin >> newSalary;

            emp.setEmpID(newID);
            emp.setEmpName(newName);
            emp.setEmpSalary(newSalary);

            cout << "Employee information updated!\n";
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            return 0;
        
              default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
