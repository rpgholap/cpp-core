#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace LibrarySystem {

class Person {
protected:
    int id;
    std::string name;
    std::string phone;

public:
    Person(int id, const std::string& name, const std::string& phone);
    virtual ~Person(); // Virtual destructor avoids resource leak
    
    virtual void displayInfo() const = 0; // Pure virtual function

    // Getters
    int getId() const;
    std::string getName() const;
    std::string getPhone() const;

    // Setters
    void setId(int newId);
    void setName(const std::string& newName);
    void setPhone(const std::string& newPhone);
};

}

#endif // PERSON_H
