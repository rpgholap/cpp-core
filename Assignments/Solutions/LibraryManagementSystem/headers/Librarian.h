#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Person.h"

namespace LibrarySystem {

class Librarian : public Person {
private:
    std::string employeeId;
    double salary;

public:
    Librarian();
    Librarian(int id, const std::string& name, const std::string& phone, const std::string& empId, double salary);
    
    void displayInfo() const override;

    std::string getEmployeeId() const;
    double getSalary() const;

    void setEmployeeId(const std::string& empId);
    void setSalary(double sal);
};

}

#endif // LIBRARIAN_H
