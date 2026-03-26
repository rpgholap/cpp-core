#include "../headers/Librarian.h"
#include <iostream>

namespace LibrarySystem {

Librarian::Librarian() : Person(0, "", ""), employeeId(""), salary(0.0) {}

Librarian::Librarian(int id, const std::string& name, const std::string& phone, const std::string& empId, double salary)
    : Person(id, name, phone), employeeId(empId), salary(salary) {}

void Librarian::displayInfo() const {
    std::cout << "[Librarian] ID: " << id 
              << " | Name: " << name 
              << " | Phone: " << phone 
              << " | Employee ID: " << employeeId 
              << " | Salary: $" << salary << "\n";
}

std::string Librarian::getEmployeeId() const { return employeeId; }
double Librarian::getSalary() const { return salary; }

void Librarian::setEmployeeId(const std::string& empId) { employeeId = empId; }
void Librarian::setSalary(double sal) { salary = sal; }

}
